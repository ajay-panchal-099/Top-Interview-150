class Solution {
public:
    int jump(vector<int>& nums) {
        int l = nums.size();
        if(l <=1) return 0;

        vector<int>jumps(l, INT_MAX-1);

        jumps[0] = 0;

        for(int i = 0; i <l ; i++){
            for( int j = i+1; j < l and j <= i+nums[i]; j++){
                jumps[j] = min(jumps[j], jumps[i]+1);
            }
        }

        return jumps[l-1];
    }
};