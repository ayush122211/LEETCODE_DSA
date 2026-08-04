class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count =0;
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>9){
                int num=nums[i];
                while(num!=0){
                    
                    int lstd=num%10;
                    if(lstd==digit) count++;
                    num=num/10;
                }
            }
          if(nums[i]==digit)count++;
        }
         return count;
    }
};