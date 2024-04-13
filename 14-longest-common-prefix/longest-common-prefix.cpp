class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end());
        int sz = strs.size();
        if(sz == 0) return "";
        if(sz==1) return strs[0];

        string prefix = "";

        for(int i = 0;  i<strs[0].length(); i++){
            char chr = strs[0][i];
            bool matchall = true;
            for(int j = 1; j < strs.size(); j++){
                if(chr != strs[j][i]) matchall = false;
            }
            if (matchall){
                prefix+=chr;
            }else{
                break;
            }
            // cout<<chr<<" ";
        }

        return prefix;

    }
};