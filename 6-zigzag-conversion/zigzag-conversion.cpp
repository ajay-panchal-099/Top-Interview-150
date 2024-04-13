class Solution {
public:
    string convert(string s, int numRows) {
        
        string ans="";
        int l = s.length();
        if (numRows >= l or numRows == 1){
            return s;
        }
        
        for( int row = 1; row< numRows+1; row++){
            if(row == 1 or row == numRows){
                ans += s[row-1];
                int nxt_idx = row+(numRows-1)*2;
                while(nxt_idx <= l){
                    ans += s[nxt_idx-1];
                    nxt_idx += (numRows-1)*2;
                }
            } else{
                ans += s[row-1];
                int nxt_idx = row+(numRows-row)*2;
                bool flag = true;
                
                while(nxt_idx <= l){
                    int nxt_idx1 = (numRows-row)*2;
                    int nxt_idx2 = (row-1)*2;
                     ans += s[nxt_idx-1];
                    if(flag){
                        nxt_idx += nxt_idx2;
                        flag = false;
                    } else{
                        flag = true;
                        nxt_idx += nxt_idx1;
                    }
                }
                // cout<<ans<<endl;
            }
        }
        
        return ans;
    }
};