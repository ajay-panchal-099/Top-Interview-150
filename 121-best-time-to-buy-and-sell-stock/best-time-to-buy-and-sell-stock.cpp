class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        if(l <2) return 0;
        int minv = prices[0];
        
        int pf = 0;

        for(int i = 0; i <l; i++){
            minv = min(prices[i], minv);
            pf = max(pf, prices[i]-minv);
        }
        
        return pf;
    }
};