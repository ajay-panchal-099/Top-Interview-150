class Solution {
public:
    bool isPalindrome(string s) {
        
        int i =0, j = s.length()-1 ;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while( i < j){ 
            if(isalnum(s[i]) and isalnum(s[j]) and s[i] == s[j] ){ 
                i++;
                j--;
            }
            else if(isalnum(s[i]) and isalnum(s[j]) and s[i] != s[j]){ 
               return false;
            }
            else if(isalnum(s[i]))
                j--;
            else
                i++;
        }
        
        
        return true;
    }
};