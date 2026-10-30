class Solution {
public:
    long long coloredCells(int n) {
        long long cc =1;
        long long p = 0;
        for(int i =1;i<=n;i++){
            cc=cc+p;
            p=p+4;
        }
         return cc ;
    }
};