class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>temp= nums;
        sort(temp.begin(),temp.end());
        vector<int>revtemp = temp;
        reverse(revtemp.begin(),revtemp.end());
        if(nums==temp || nums== revtemp){
            return true;
        } 
        return false;
        
    }
};