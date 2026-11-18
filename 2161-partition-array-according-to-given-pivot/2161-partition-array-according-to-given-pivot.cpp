class Solution {
 public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {
//         vector<int>less;
//         vector<int>more;
//         vector<int>equal;
//         vector<int>ans;
//         for( int i =0;i<nums.size();i++){
//             if( nums[i]<pivot) less.push_back(nums[i]);
//              if( nums[i]>pivot) more.push_back(nums[i]);
//               if( nums[i]==pivot) equal.push_back(nums[i]);
            
//         }
//         for(int i =0;i<less.size();i++){
//             ans.push_back(less[i]);
//         }
//         for(int i =0;i<equal.size();i++){
//             ans.push_back(equal[i]);

//         }
//         for(int i =0;i<more.size();i++){
//             ans.push_back(more[i]);
//         }
//     return ans ;
         
        
//     }
// };

      vector<int> pivotArray(vector<int>& nums, int pivot) {
         vector<int>ans;
         for( int i =0;i<nums.size();i++){
            if( nums[i]<pivot) ans.push_back(nums[i]);
         }
           for( int i =0;i<nums.size();i++){
             if( nums[i]==pivot) ans.push_back(nums[i]);
           }
             for( int i =0;i<nums.size();i++){
                 if( nums[i]>pivot) ans.push_back(nums[i]);
             }
              return ans;
      }
};