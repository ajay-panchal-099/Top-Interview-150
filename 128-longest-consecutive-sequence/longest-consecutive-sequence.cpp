class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st(nums.begin(), nums.end());
        int longest = 0;

        for( auto it = st.begin(); it != st.end(); it++){
            int num = *it;
            int count = 1;
            if(st.find(num-1) == st.end()){
                while(st.find(num+1) != st.end()){
                    num++;
                    count++;
                }
                longest = max(longest, count);
            }
        }

        return longest;
    }
};