class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>>freq;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x: nums){
            mp[x]++;
        }
        for( auto it :mp ){
            freq.push_back({ it.first,it.second});

        }
        sort(freq.begin(), freq.end(), [](auto a, auto b) {
    if(a.second != b.second)
        return a.second < b.second;

    return a.first > b.first;
});
for( auto p : freq){
    for( int i =0;i<p.second;i++){ 
    ans.push_back(p.first);
}
}

     return ans;   
    }
};