class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_map<char,int>mp;
        for(char  ch: jewels){
            mp[ch]++;
        }
        for(auto ch: stones){
            if(mp.find(ch)!=mp.end())
            ans++;
        }
        return ans;
    }
};