class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0 ;
        vector<int>ans;
        for(int x :nums1){
            ans.push_back(x);
        }for(int x :nums2){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
            int n =ans.size();
        

        
        if(n%2==0){
           
            median=(ans[(n/2-1)]+ ans[n/2])/2.0 ;
        }
        else{
            median= ans[n/2];
    }
        return median;
    }
};