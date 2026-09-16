class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(auto ch : magazine){
            m[ch]++;
        }
         for(auto ch :ransomNote ){
            m[ch]--;
        }
        for(int i=0; i<ransomNote.size();i++){
            if(m[ransomNote[i]]>=0){ 
        }else{
            return 0;
        }
        }
        return 1;
    }
};