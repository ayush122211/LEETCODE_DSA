class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i =num1;i<=num2;i++){
            int peak=0;
            int valley=0;
            string s = to_string(i);
            if(s.length()<3) continue;
            for(int i=1;i<s.length()-1;i++){
                char c0= s[i-1]-'0';
                char c1= s[i]-'0';
                char c2 = s[i+1]-'0';

                if( c1> c0 && c1>c2){
                    peak++;

                } 
                if(c1<c0 && c1<c2){
                    valley++;
                }
            } 
            count+=peak;
            count+=valley;
        }
         return count ;
    }
};