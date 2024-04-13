class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = nums.size();
        int jump = 0;

        for( int i = 0; i < l; i++){
            jump = max(jump, i+nums[i]);
            if(jump >= l-1) return true;
            if(jump == i) return false;
        }
        cout<<jump<<" ";

        return jump>=l;
    }
};