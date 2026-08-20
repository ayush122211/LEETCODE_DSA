class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m =matrix.size();
        int n =matrix[0].size();
        int startrow=0;
        int endrow=m-1;
        while( startrow<= endrow){
            int midrow= startrow+(endrow- startrow )/2;
            if( matrix[midrow][0]<= target &&  target <=matrix[midrow][n-1]) {
                int st=0;
                int end= n-1;
                while (st<=end){ 
                int mid = st+(end-st)/2;
                if(target==matrix[midrow][mid]){
                    return true;
                } else if( target<matrix[midrow][mid]){
                    end=mid-1;
                } else{
                    st=mid+1;
                }
         }
                return false ;
                    }else if(target<matrix[midrow][0]){
                    endrow=midrow-1;

                }else{
                    startrow=midrow+1;
                } 
            }
        
             return false ;
    }
};