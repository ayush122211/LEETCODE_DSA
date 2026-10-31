class Solution {
public:
    int percentageLetter(string s, char letter) {
      //  unordered_map<char,int>mp;
        //for(char ch : s ){
          //  mp[ch]++;
        // }
        int count =0;
        int  n = s.size();
        // int ans =(mp[letter]*100)/n;
        // return ans ;
         for (char ch : s){
            if ( ch== letter){
                count++;
            }
         }
             int ans = (count*100)/n;       
return ans;
    }
};