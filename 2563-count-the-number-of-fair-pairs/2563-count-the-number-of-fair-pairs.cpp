class Solution {
public:
 long long countPair( vector<int>nums , int limit ){
     int n = nums.size();
      int i =0 ,j= n-1;
      long long count =0;
      while( i<j){
        long long sum = nums[i]+nums[j];
        if( sum<=limit){
            count+= j-i;
            i++;

        }else {
            j--;
        }
        
      }
       return count ;
 }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
         sort( nums.begin(),nums.end());
       return   countPair( nums,upper)- countPair( nums,lower-1);
        
    }
};