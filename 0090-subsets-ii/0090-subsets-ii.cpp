class Solution {
public:
void getallsubsets(vector<int>&nums,vector<int>& ans,int i , vector<vector<int>>&allSubsets){
    if(i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }
        //include 
        ans.push_back(nums[i]);
         getallsubsets(nums,ans,i+1,allSubsets);
         ans.pop_back();
          int indx=i+1;
          while( indx <nums.size() && nums[indx-1]==nums[indx]) indx++;
          //exclude
           getallsubsets(nums,ans,indx,allSubsets); 
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>allSubsets;
        vector<int>ans;
        getallsubsets(nums,ans,0,allSubsets);
        return allSubsets;
        
    }
};