class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x : nums){
            freq[x]++;
        }
        for(auto it : nums){
            if(it%2==0 && freq[it]==1){
                return it;
            }
        }
        return-1;
        
    }
};