class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        if(l <=1) return l;


        int i = 0, j = 1;

        while(j < l){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                nums[++i] = nums[j++];
            }
            // cout<<i<<" ";
        }
        

        return i+1;
    }
};