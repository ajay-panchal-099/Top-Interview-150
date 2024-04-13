class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int> > ans;
        
        if(nums.size() < 3) return ans;
        
        sort(nums.begin(), nums.end());
        
        for( int i = 0; i < nums.size()-1; ){ 
            int sum =  nums[i];
            if(sum>0)break;
            int j = i+1, k = nums.size()-1;
            while(j < k){ 
                 if(nums[k] + nums[j] + sum == 0){ 
                     ans.push_back(vector<int>({sum, nums[j], nums[k]}));
                      j++;
                      k--;
                    while( j<k && nums[j]==nums[j-1])
							j++;
                    while(j<k && nums[k]==nums[k+1])
                        k--;
                 }
                else if(nums[k] + nums[j] + sum > 0){ 
                    k--;
                }
                else
                    j++;
            }
            i++;
            while(i>0 && i < nums.size() and nums[i]==nums[i-1])
                i++;
        }
        return ans;
        
    }
};