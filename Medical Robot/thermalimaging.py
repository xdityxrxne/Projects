import cv2

# Load the thermal video
cap = cv2.VideoCapture('/home/vinay/Downloads/istockphoto-1313458510-640_adpp_is.mp4')

# Load the pre-trained face detection model
face_cascade = cv2.CascadeClassifier('/home/vinay/Downloads/opencv-master/data/haarcascades/haarcascade_frontalface_default.xml')

# Check if the face cascade classifier is loaded properly
if face_cascade.empty():
    print("Error: Failed to load the cascade classifier.")
    exit()

# Process each frame in the video
while cap.isOpened():
    ret, frame = cap.read()

    # Check if a valid frame is read
    if not ret:
        break

    # Preprocess the frame (if required)
    # Apply necessary image processing techniques (e.g., denoising, thresholding)

    # Convert the frame to grayscale
    gray_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Apply a color map to enhance temperature visualization
    colored_frame = cv2.applyColorMap(gray_frame, cv2.COLORMAP_JET)

    # Detect faces in the grayscale frame
    faces = face_cascade.detectMultiScale(gray_frame, scaleFactor=1.1, minNeighbors=5)

    # Iterate over each detected face
    for (x, y, w, h) in faces:
        # Draw a rectangle around the detected face
        cv2.rectangle(colored_frame, (x, y), (x + w, y + h), (0, 255, 0), 2)

        # Extract temperature information from the face region of interest (ROI)
        roi_temperature = colored_frame[y:y + h, x:x + w]
        average_temperature = cv2.mean(roi_temperature)[0]

        # Display the average temperature on the frame
        cv2.putText(colored_frame, f'Temperature: {average_temperature:.2f} C', (x, y - 10),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)

    # Display the processed frame
    cv2.imshow('colored_frame', colored_frame)
    cv2.imshow('frame', frame)

    # Break the loop if 'q' is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the video capture and close all windows
cap.release()
cv2.destroyAllWindows()

