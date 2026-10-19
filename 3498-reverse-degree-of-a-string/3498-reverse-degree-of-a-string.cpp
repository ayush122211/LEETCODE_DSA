class Solution {
public:
    int reverseDegree(string s) {
        int degree=0;
        for(int i =0;i<s.size();i++){
            int  revpostion=('z'-s[i]+1);
            degree+= (i+1)*(revpostion);
        }
        return degree;
    }
};