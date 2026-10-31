class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,int>mp;
        for(char ch : s ){
            mp[ch]++;
        }
        int n = s.size();
        int ans =(mp[letter]*100)/n;
        return ans ;
    }
};