class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ans =0;
        for(int i =0;i<word.size();i++){
            if( word[i]==ch){
                ans=i;
                break;
            }
        }
         reverse( word.begin(),word.begin()+ans+1);
         return word;
        
    }
};