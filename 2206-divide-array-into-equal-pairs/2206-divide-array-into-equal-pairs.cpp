class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int ,int>pair;
        for(int x :nums){
            pair[x]++;

        }
        for(auto it :pair){
            if(it.second%2!=0){
                return false;
            }
        }
        return true;
        
    }
};