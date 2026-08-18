class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int st=0;
        int end= n-1;
        while( st<=end){
            int mid = st +(end-st)/2;
            if( arr[mid]== target) return 1;
            if(arr[st]==arr[mid] && arr[mid]==arr[end]){
                st++;
                end--;
                continue;
            }

            if( arr[st]<= arr[mid]) { // left half is sorted 
            if( arr[st]<=target && target<=arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            } 
          }  else {
                if( arr[mid]<=target && target<=arr[end]){
                    st=mid+1;

                }else{
                    end=mid-1;

                }
            }

            }
        
        return 0;
    }
};