class Solution {
public:
    bool checkDivisibility(int n) {
       // int sum =0;
       int temp=n;
        int digitsum=0;
        int digitproduct=1;
        while(temp>0){
            int lastdigit=temp%10;
            digitsum+=lastdigit;
            digitproduct*=lastdigit;
            temp=temp/10;

        }
        if(n%(digitsum+digitproduct)==0){
            return 1;
        }else {
            return 0;
        }
        
    }
};