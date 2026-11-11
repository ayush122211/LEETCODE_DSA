class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n = points.size();
        int ans=0;

    for( int i =0;i<n;i++){
        //  current points is our centre
          unordered_map<int,int> mp ;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            int dx =points[i][0]- points[j][0];
            int dy=points[i][1]- points[j][1];
             int distance= dx*dx+ dy*dy;
             mp[distance]++;
        }
        for( auto p:mp ){
            int freq= p.second;
            ans+=freq*(freq-1);
        }
    }
        return ans;
    }
};