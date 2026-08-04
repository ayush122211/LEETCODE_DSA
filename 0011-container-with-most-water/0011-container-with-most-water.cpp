class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =height.size();
        int start=0;
        int end=n-1;
        int maxwater=0;
        while(start<end){
            int  currwater=min(height[start],height[end])*(end-start);
            maxwater=max(maxwater,currwater);
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
        }
        return maxwater;
    }
};