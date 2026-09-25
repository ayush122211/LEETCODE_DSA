class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>set1;
        
        for(char ch : s){
            set1.insert(ch);
        }
    
         return set1.size();
    
        
    }
};