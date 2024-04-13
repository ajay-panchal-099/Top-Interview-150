class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        
        vector<int>leftP(l), rightP(l), output(l,1);

        leftP[0] = nums[0];
        for(int i = 1; i <l; i++){
            leftP[i] = leftP[i-1] * nums[i];
        }

        rightP[l-1] = nums[l-1];
        for(int i = l-2; i>=0; i--){
            rightP[i] = rightP[i+1] * nums[i];
        }

        for(int i = 0; i < l; i++){
            
            if(i-1>=0){
                output[i]*=leftP[i-1];
            }
            if(i+1<l){
                output[i]*=rightP[i+1];
            }
        }

        return output;
        
    }
};