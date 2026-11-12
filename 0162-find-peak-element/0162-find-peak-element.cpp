class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi= nums[0];
        for(int i =0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);

        }
        for(int i =0;i<nums.size();i++){
            if(nums[i]==maxi) return i;
        }
        return -1;
    }
};