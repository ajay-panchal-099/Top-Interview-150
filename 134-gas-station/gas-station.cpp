class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int roundpossible = 0;
        int l = gas.size();
        for(int i =0; i < l; i++){
            roundpossible += gas[i]-cost[i];
        }

        if(roundpossible<0) return -1;
        

        int start = 0;
        int accumulate = 0;
        for(int i = 0; i < gas.size(); i++){
            int curGain = gas[i] - cost[i];
            if(accumulate + curGain < 0){
                start = i + 1;
                accumulate = 0;
            }
            else accumulate += curGain;
        }
        
        return start;
    }
};