class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(int x :arr1){
            mp[x]++;
        }
        vector<int>ans;
        for(int i =0;i<arr2.size();i++){
            while(mp[arr2[i]]!=0){
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }
        vector<int>left_ele;
        for(int x:arr1){
            if(mp[x]>0){
                left_ele.push_back(x);
            }
        }
        sort(left_ele.begin(),left_ele.end());
        for (int x :left_ele){
            ans.push_back(x);
        }
         return ans ;
    }
};