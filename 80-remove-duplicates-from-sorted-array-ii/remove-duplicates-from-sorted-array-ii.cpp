class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0, end = 0;
        int n = nums.size(); 
        
        
        while( end < n){ 
           
           int x =0; 
           int val = nums[end];
            while(end<n && nums[end] == val){ 
                x++;
                end++;
            }
            
            if(x == 1){ 
                nums[start++] = val;
            }
            else{ 
                nums[start] = nums[start+1] = val;
                start+=2;
            }
        }
        
        return start;
    }
};