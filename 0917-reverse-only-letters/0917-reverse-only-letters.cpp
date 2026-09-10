class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i =0;
        int j=s.size()-1;
        while(i<=j){
            if(isalpha(s[i])){
                while(!isalpha(s[j])){
                    j--;
                }
                swap(s[i],s[j]);
                i++;
                j--;
            } else{
                i++;
            }
        }
        return s;
    }
};