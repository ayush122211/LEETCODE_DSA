class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        unordered_set<int>st;
        
    
        for( int x :nums){
            st.insert(x);

        }
        for(auto it: st){
            ans.push_back(it);
        }

        sort(ans.begin(),ans.end());
         if( ans.size()<3){
            return ans[ans.size()-1];
         }else {
            return ans[ans.size()-3];
         }
    }
};