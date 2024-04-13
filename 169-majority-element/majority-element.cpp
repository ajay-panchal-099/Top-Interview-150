class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore algo
        int l = nums.size();
        if(l<=1) return nums[l-1]; 
        int i = 0, j = 1;

        
        int count = 1;
        int ele = nums[0];

        while(j < l){
            if(nums[i] == nums[j]){
                count++;
            }
            else{
                count--;
                if(count < 0){
                    ele = nums[j];
                    i = j;
                    count = 1;
                }
                
            }
            j++;
        }

        return ele;
    }
};