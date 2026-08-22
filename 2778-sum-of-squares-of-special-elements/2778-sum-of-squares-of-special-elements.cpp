class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>square;
        for(int i =1;i<=n;i++){
            if(n%i==0){
                square.push_back(nums[i-1]);
            }
        }
        int sum =0;
        int s=square.size();
        for(int i =0;i<s;i++){
            sum+=square[i]*square[i];
        }
         return  sum;
    }
};