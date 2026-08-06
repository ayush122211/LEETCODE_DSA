class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>freq;
        vector<int>ans;
        unordered_map<int,int>keys;
        for(int val :nums){
            keys[val]++;
        } 
        for(auto it : keys){
            freq.push_back(it.second);
            
        }
        sort(freq.begin(),freq.end());
        for(auto it: keys){
            if( it.second >= freq[freq.size()-k]){
                ans.push_back(it.first);

            }
        }
        return ans;
    }
};