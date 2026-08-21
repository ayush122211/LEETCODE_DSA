class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamming=0;
        while(x>0||y>0){
            if(x%2!=y%2) {
                hamming++;

            }
            x=x/2;
            y=y/2;
        }
        return hamming;
        
    }
};