class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i =0;
        int j =nums.size()-1;
        int maxans =0;
        while(i<=j){
             int currans=0;
           // if( nums[i]==nums[i+1] ) i++;
            while( j>=i &&nums[i]!=nums[j]-1){
                j--;
             }
              currans=j-i+1;
               i++;
            j=nums.size()-1;
            maxans=max(maxans,currans);
            
        }

         return maxans ;
    }
};