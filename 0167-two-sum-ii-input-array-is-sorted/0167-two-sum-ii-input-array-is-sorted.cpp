class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int st=0, end=nums.size()-1;
        while( st<end){
            if( (nums[st]+nums[end]) <target){ 
            st++;
        }else if( (nums[st]+nums[end]) > target){
            end --;
        } else{
            ans.push_back(st+1);
            ans.push_back(end+1);
            break;
        }
        }
         return ans ;
    }
};