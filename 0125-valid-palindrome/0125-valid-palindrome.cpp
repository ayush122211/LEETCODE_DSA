class Solution {
public:
    bool isPalindrome(string s) {
        string check;
        for( auto ch: s){
            if(isalnum(ch)){
                check+=ch;

            }

        }
         for( auto &ch: check){
            ch=tolower(ch);
         }
         int st=0;
         int end=check.size()-1;
          while(st<=end){
            if(check[st]!=check[end]){
                return false;
            }else{
                st++;
                end--;
            }
          }
         return 1;
    }
};