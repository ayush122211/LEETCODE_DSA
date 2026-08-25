class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans =0;
        int n =nums.size();
         n =n+1;
        unordered_map<int,int>original;
        for( int x :nums){
            original[x]++;

        }
        for(int i =k;i<=k*n;i=i+k){
            if(original[i]==0){
                ans=i;
                break;
            }
        }
        
        return ans ;
    }
};