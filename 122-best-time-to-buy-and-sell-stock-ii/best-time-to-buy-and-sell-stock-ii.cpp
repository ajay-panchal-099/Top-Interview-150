class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        if(l <2) return 0;
        
        int pf = 0;

        for(int i = 1; i <l; i++){
            if (prices[i] > prices[i-1]){
                pf += prices[i] - prices[i-1];
            }   
        }
        
        return pf;
    }
};