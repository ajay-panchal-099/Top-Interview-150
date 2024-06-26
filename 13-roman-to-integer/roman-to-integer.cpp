class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L']  = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M']  = 1000;
        int ans = 0;
        int i = 0;
        int l = s.length();
        while( i < l){
            if(i+1 < l && roman[s[i]] < roman[s[i+1]]){
                ans += roman[s[i+1]] - roman[s[i]];
                i+=2;
            } else {
                ans += roman[s[i]];
                i++;
            }
        }

        return ans;
    }
};