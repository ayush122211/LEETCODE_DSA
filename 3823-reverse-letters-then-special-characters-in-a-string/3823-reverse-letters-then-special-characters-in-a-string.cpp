class Solution {
public:
    string reverseByType(string s) {
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
        int a=0;
        int b =s.size()-1;
        while(a<=b){
            if(!isalpha(s[a])){
                while(isalpha(s[b])){
                    b--;
                }
                swap(s[a],s[b]);
                a++;
                b--;
            
        } else{
            a++;
        }
        }
        return s; 
    }
};