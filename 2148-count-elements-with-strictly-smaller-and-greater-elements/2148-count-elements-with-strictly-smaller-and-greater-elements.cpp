class Solution {
public:
    int countElements(vector<int>& nums) { 
        //0{n*n}
    //     int ans =0;
    //     int j=0;
    //      int higher=0;
    //       int lower=0;
    //       while(j< nums.size()){ 
    //         higher=0;
    //         lower=0;

    //     for(int i=0; i<nums.size();i++){
            
             
    //         if(nums[i]>nums[j])   higher++;
            
    //         if(nums[i]<nums[j]) lower++;
        
    //     }
    //         if( higher>0 && lower>0){
    //             ans++;
            
    //     }
    //     j++;
    //       }
        
    //      return ans;

    int ans=0;

       int maxele=INT_MIN;
       int minele=INT_MAX;
       for(int i =0;i<nums.size();i++){
        maxele=max(maxele,nums[i]);
        minele=min(minele,nums[i]);
       }
         for(int i =0;i<nums.size();i++){
        if( nums[i]>minele && nums[i]<maxele){
            ans++;
        }
       }
 return ans ;
    }
};