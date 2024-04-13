class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);

        string word;
        string ans;
        deque<string>pf;
        while(ss >> word){
            pf.push_front(word);
        }

        for( int i = 0; i < pf.size(); i++){
            if( i== pf.size()-1)
                ans+= pf[i];
            else 
                ans+= pf[i]+" ";
        }
        return ans;
    }
};