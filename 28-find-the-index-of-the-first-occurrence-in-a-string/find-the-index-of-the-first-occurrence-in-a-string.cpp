class Solution {
public:
    vector<int> find_lps(const string &needle){
        int l = needle.length();
        int i = 0, j = 1;

        vector<int>lps(l, 0);
        lps[0] = 0;

        while(j < l){
            if(needle[i] == needle[j]){
                i++;
                lps[i] = j;
                j++;
            }
            else{
                if(j != 0) j = lps[j-1];
                else{
                    lps[i] = 0; i++;
                }
            }
        }
        return lps;
    }

    int strStr(string haystack, string needle) {
        return haystack.find(needle);
        // //KMP Algo
        // int l = haystack.length();
        // //Get the LPS
        // vector<int> lps = find_lps(needle);

        // //Match the string
        // int i = 0, j=0;
        // while(j <l){
        //     if(lps[i] == haystack[j]){
        //         i++, j++;
        //     }
        //     if(i == needle.length()){
        //         return j-i;
        //     } else if(j <l and lps[i] != haystack[j]){
        //         if (j != 0){
        //              j = lps[j-1];
        //         }
        //         else{
        //             lps[i] = 0;
        //             i++;
        //         }
        //     } 
        // }

        // return -1;
    }
};