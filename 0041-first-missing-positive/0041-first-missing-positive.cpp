class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s1;
        int i =0;

        for(int x: nums){
            s1.insert(x);
        }
        for( i =1;i<INT_MAX;i++){
            if(s1.find(i)==s1.end()){
                break;
                
            }
        }
     return i;
    }
};