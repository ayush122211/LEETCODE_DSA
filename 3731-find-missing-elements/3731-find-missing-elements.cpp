class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int max_ele=INT_MIN;
        int min_ele=INT_MAX;
        for(int i =0;i<nums.size();i++){
            max_ele=max(max_ele,nums[i]);
            min_ele=min(min_ele,nums[i]);
        }
        for(int i=min_ele;i<=max_ele;i++ ){
            if(find(nums.begin(),nums.end(),i)==nums.end()){

            
            ans.push_back(i);
            }
        }
         return ans;
    }
};