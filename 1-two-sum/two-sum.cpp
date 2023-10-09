class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++){
            int second_num = target - nums[i];
            if(mp.find(second_num) != mp.end()){
                ans.push_back(mp[second_num]);
                ans.push_back(i);
                return ans;
            } 
            mp[nums[i]] = i;
        }
        return ans;
    }
};