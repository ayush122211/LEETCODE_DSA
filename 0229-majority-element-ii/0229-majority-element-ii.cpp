class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans;
        unordered_map<int,int>map;
        for(int x :nums){
            map[x]++;
        }
        for(auto it : map){
            if( it.second>n/3){
                ans.push_back(it.first);
            }
        }
     return ans ;
    }
};