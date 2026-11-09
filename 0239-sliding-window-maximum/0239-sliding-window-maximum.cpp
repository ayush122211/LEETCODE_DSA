class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>result;
        deque <int>dq;
         // 1st window 
          
           for( int i =0;i<k;i++){
              while( dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
              }
               dq.push_back(i);
           }


            // foe nect windows 
             for (int i =k ;i<n;i++){
                 result.push_back( nums[ dq.front()]);
                  // removing elemnets that are the part of curr windows
                    while( dq.size()>0 && dq.front() <= i-k){
                        dq.pop_front();
                    }
                      while ( dq.size()>0 && nums[dq.back()]<= nums[i]){
                        dq.pop_back();

                      }
                      dq.push_back(i);
             }
              result.push_back( nums[dq.front()]);
              return result  ;
        
    }
};