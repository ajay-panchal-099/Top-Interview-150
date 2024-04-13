class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int l = s.length();
        int ansl = 0, chr = 0;;
        if(s.empty()) return ansl;

        while(l>0){
            if(s[l-1] == ' ' and chr>0) return ansl; 
            if (s[l-1] != ' '){
                chr++;
                ansl++;
            }     
            l--;  
        }
        return ansl;
    }
};