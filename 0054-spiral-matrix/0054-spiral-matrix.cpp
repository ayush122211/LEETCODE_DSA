class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m =matrix.size();
        int n =matrix[0].size();
        int startrow=0;
        int endrow=m-1;
        int startcolumn=0;
        int endcolumn=n-1;
        while( startrow <=endrow && startcolumn <=endcolumn){
            // top boundary
            for(int j =startcolumn;j<=endcolumn;j++){
                ans.push_back(matrix[startrow][j]);
            }
            //right bounadry
            for(int i =startrow +1;i<=endrow;i++){
                ans.push_back(matrix[i][endcolumn]);
            }
            // bottom boundary
            for(int j =endcolumn-1;j>=startcolumn;j--){
                if(startrow==endrow) break;
                ans.push_back(matrix[endrow][j]);
            }
            //left boundary
            for(int i =endrow-1;i>=startrow+1;i--){
                if(startcolumn==endcolumn) break;
                ans.push_back(matrix[i][startcolumn]);
            }
            startrow++;
            endrow--;
            startcolumn++;
            endcolumn--;

    }
         return ans ;
    }
};