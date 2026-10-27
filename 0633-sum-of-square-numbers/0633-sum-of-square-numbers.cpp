class Solution {
public:
    bool judgeSquareSum(int c) {
        long long st=0;
        int  long end=sqrt(c);
        while( st<=end){
            if((st*st) + (end*end)==c){
                return true;

            }
            else  if ((st*st) + (end*end)>c){
                end--;
            }
            else{
                st++;
            }
        }
        return false ;
    }
};