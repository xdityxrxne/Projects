#ifndef UUID2377304400800
#define UUID2377304400800

/**
  * RandomForestClassifier(base_estimator=DecisionTreeClassifier(), bootstrap=True, ccp_alpha=0.0, class_name=RandomForestClassifier, class_weight=None, criterion=gini, estimator_params=('criterion', 'max_depth', 'min_samples_split', 'min_samples_leaf', 'min_weight_fraction_leaf', 'max_features', 'max_leaf_nodes', 'min_impurity_decrease', 'random_state', 'ccp_alpha'), max_depth=10, max_features=auto, max_leaf_nodes=None, max_samples=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, n_estimators=5, n_jobs=None, num_outputs=2, oob_score=False, package_name=everywhereml.sklearn.ensemble, random_state=None, template_folder=everywhereml/sklearn/ensemble, verbose=0, warm_start=False)
 */
class RandomForestClassifier {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
                    
            uint16_t votes[2] = { 0 };
            uint8_t classIdx = 0;
            float classScore = 0;

            
                tree0(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree1(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree2(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree3(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree4(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            

            // return argmax of votes
            uint8_t maxClassIdx = 0;
            float maxVote = votes[0];

            for (uint8_t i = 1; i < 2; i++) {
                if (votes[i] > maxVote) {
                    maxClassIdx = i;
                    maxVote = votes[i];
                }
            }

            predictedValue = maxClassIdx;

                    

            latency = micros() - startedAt;

            return (lastPrediction = predictedValue);
        }

        
            

            /**
             * Predict class label
             */
            String predictLabel(float *x) {
                return getLabelOf(predict(x));
            }

            /**
             * Get label of last prediction
             */
            String getLabel() {
                return getLabelOf(lastPrediction);
            }

            /**
             * Get label of given class
             */
            String getLabelOf(int8_t idx) {
                switch (idx) {
                    case -1:
                        return "ERROR";
                    
                        case 0:
                            return "Dominoes";
                    
                        case 1:
                            return "Starbucks";
                    
                    default:
                        return "UNKNOWN";
                }
            }


            /**
             * Get latency in micros
             */
            uint32_t latencyInMicros() {
                return latency;
            }

            /**
             * Get latency in millis
             */
            uint16_t latencyInMillis() {
                return latency / 1000;
            }
            

    protected:
        float latency = 0;
        int lastPrediction = 0;

        
            

        
            
                /**
                 * Random forest's tree #0
                 */
                void tree0(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[93] <= 0.16838093847036362) {
                            
                                
                        if (x[48] <= 0.157976932823658) {
                            
                                
                        if (x[101] <= 0.23906944692134857) {
                            
                                
                        *classIdx = 1;
                        *classScore = 657.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[119] <= 0.036780322436243296) {
                            
                                
                        if (x[108] <= 0.5521272867918015) {
                            
                                
                        *classIdx = 0;
                        *classScore = 284.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 657.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[134] <= 0.301162256160751) {
                            
                                
                        *classIdx = 1;
                        *classScore = 657.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 284.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[125] <= 0.47076572477817535) {
                            
                                
                        if (x[76] <= 0.33873772621154785) {
                            
                                
                        if (x[26] <= 0.07087482651695609) {
                            
                                
                        if (x[23] <= 0.348080039024353) {
                            
                                
                        *classIdx = 0;
                        *classScore = 284.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 657.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 657.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 284.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[99] <= 0.677823394536972) {
                            
                                
                        *classIdx = 0;
                        *classScore = 284.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 657.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[129] <= 0.24048563838005066) {
                            
                                
                        if (x[66] <= 0.09332713484764099) {
                            
                                
                        *classIdx = 1;
                        *classScore = 657.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 284.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 284.0;
                        return;

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #1
                 */
                void tree1(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[67] <= 0.5033950060606003) {
                            
                                
                        if (x[3] <= 0.7187811136245728) {
                            
                                
                        if (x[5] <= 0.10869412124156952) {
                            
                                
                        *classIdx = 1;
                        *classScore = 655.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[69] <= 0.7238542288541794) {
                            
                                
                        *classIdx = 1;
                        *classScore = 655.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 286.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[101] <= 0.009909701882861555) {
                            
                                
                        *classIdx = 1;
                        *classScore = 655.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 286.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[74] <= 0.32277877628803253) {
                            
                                
                        *classIdx = 0;
                        *classScore = 286.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 655.0;
                        return;

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #2
                 */
                void tree2(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[91] <= 0.10458919033408165) {
                            
                                
                        if (x[72] <= 0.5610720813274384) {
                            
                                
                        if (x[8] <= 0.4328594505786896) {
                            
                                
                        if (x[57] <= 0.7401357591152191) {
                            
                                
                        *classIdx = 1;
                        *classScore = 638.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 303.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 303.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[33] <= 0.4160303622484207) {
                            
                                
                        *classIdx = 0;
                        *classScore = 303.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 638.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[24] <= 0.19656746089458466) {
                            
                                
                        if (x[57] <= 0.07097357325255871) {
                            
                                
                        if (x[124] <= 0.3343578279018402) {
                            
                                
                        *classIdx = 1;
                        *classScore = 638.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 303.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 303.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[122] <= 0.11858051642775536) {
                            
                                
                        if (x[0] <= 0.030415068846195936) {
                            
                                
                        *classIdx = 0;
                        *classScore = 303.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 638.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 303.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #3
                 */
                void tree3(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[88] <= 0.17016324400901794) {
                            
                                
                        if (x[92] <= 0.19728077948093414) {
                            
                                
                        if (x[119] <= 0.8000788986682892) {
                            
                                
                        if (x[101] <= 0.4701625406742096) {
                            
                                
                        *classIdx = 1;
                        *classScore = 667.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 274.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 274.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[24] <= 0.17510390654206276) {
                            
                                
                        *classIdx = 0;
                        *classScore = 274.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 667.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[27] <= 0.12808921188116074) {
                            
                                
                        if (x[58] <= 0.025098825804889202) {
                            
                                
                        *classIdx = 1;
                        *classScore = 667.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[54] <= 0.45424728840589523) {
                            
                                
                        *classIdx = 0;
                        *classScore = 274.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 667.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[91] <= 0.1226310133934021) {
                            
                                
                        *classIdx = 1;
                        *classScore = 667.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 274.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #4
                 */
                void tree4(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[93] <= 0.0810585506260395) {
                            
                                
                        if (x[10] <= 0.000920869642868638) {
                            
                                
                        if (x[67] <= 0.2124727927148342) {
                            
                                
                        *classIdx = 1;
                        *classScore = 662.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[127] <= 0.1461404487490654) {
                            
                                
                        if (x[129] <= 0.42013750970363617) {
                            
                                
                        if (x[85] <= 0.7256794273853302) {
                            
                                
                        if (x[133] <= 0.297272264957428) {
                            
                                
                        *classIdx = 1;
                        *classScore = 662.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[10] <= 0.09640539810061455) {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 662.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[57] <= 0.17963646166026592) {
                            
                                
                        *classIdx = 1;
                        *classScore = 662.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[116] <= 0.02498521003872156) {
                            
                                
                        if (x[48] <= 0.20303597301244736) {
                            
                                
                        if (x[58] <= 0.07575562596321106) {
                            
                                
                        *classIdx = 1;
                        *classScore = 662.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[91] <= 0.04149903263896704) {
                            
                                
                        *classIdx = 1;
                        *classScore = 662.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 279.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        


            
};



static RandomForestClassifier classifier;


#endif
