class Solution {
public:
  //  int longestMonotonicSubarray(vector<int>& nums) {
        // int n = nums.size();
        // int result=0;
        // for(int i=0;i<n;i++){
        //      int inc=1;
        //      int j =i+1;
        //      while( j<n && nums[j]>nums[j-1]){
        //         inc++;
        //         j++;

        //      }
        //       int dec=1;
        //       j =i+1;
        //       while(j<n && nums[j]<nums[j-1]){
        //         dec++;
        //         j++;
        //       }

        //        int ans = max(inc,dec);
        //        result=max(result,ans);
        // }
        // return result;
        //optimize
          int longestMonotonicSubarray(vector<int>& nums) {
            int n = nums.size();
            int inc=1;
            int dec=1;
            int result=1;
            for(int i =1;i<n;i++){
                if( nums[i]>nums[i-1]){
                    inc++;
                    dec=1;
                    result=max( inc,result);
                } else if ( nums[i]<nums[i-1]){
                    dec++;
                    inc=1;
                    result= max( result,dec);

                }else {
                    dec=1;
                    inc=1;

                }

            }
            return result;



    }
};