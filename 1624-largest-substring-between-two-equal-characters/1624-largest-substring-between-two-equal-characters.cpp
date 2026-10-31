class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>m;
        int ans = -1;
        int n = s.size();
         for(int  i =0;i<n;i++){
            if( m.find(s[i])== m.end()){
                m[s[i]]=i;
            }
            else {
                ans=max( ans, i - m[s[i]]-1);

            }
         }
         return ans ;
    }
};