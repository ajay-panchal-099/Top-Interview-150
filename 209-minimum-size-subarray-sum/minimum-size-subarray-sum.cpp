class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int minLen = INT_MAX;

        int i =0, j = 0;
        int sum = 0;
        int l = nums.size();
        while(j < l){
            sum+=nums[j];
            while(sum >=target){
                sum -= nums[i];
                minLen = min(j-i+1, minLen);
                i++;
            }
            j++;
        }

        return minLen == INT_MAX?0:minLen;


    }
};