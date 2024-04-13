class Solution {
public:
    string intToRoman(int num) {
         
        map<int,string> mp;
        mp[1] =  "I";
        mp[2] = "II";
        mp[3] = "III";
        mp[4] = "IV";
        mp[5] = "V";
        mp[9] = "IX";
        mp[10] = "X";
        mp[40] = "XL";
        mp[50] = "L";
        mp[90] = "XC";
        mp[100] = "C";
        mp[400] = "CD";
        mp[500] = "D";
        mp[900] = "CM";
        mp[1000] = "M";
        
        int arr[] = {1,2,3,4,5,9,10,40,50,90,100,400,500,900,1000};
        
        int j = 14;
        
        string ans="";
        if(num<= 5) return mp[num];
        while(num > 0 ){   
            if(num>=arr[j]){  
                ans+= mp[arr[j]];
                num -= arr[j];
            }
            else{ 
               j--;
            }
        }
        
        return ans;
    }
};