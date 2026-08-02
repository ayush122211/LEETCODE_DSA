class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n =nums.size();
        long long maxstrength =0;
        for(long long i =0;i<n-1;i++){        
            for(long long j =i+1;j<n;j++){
                long long numsg=gcd(nums[i],nums[j]);
                long long product= 1LL*nums[i]*nums[j]; // 1LL is a long long literal entire multipication is performed in 64-bits
                long long currstrength=product/(numsg*numsg);
                maxstrength=max(maxstrength,currstrength);
            }
        }
        return maxstrength;
    }
};