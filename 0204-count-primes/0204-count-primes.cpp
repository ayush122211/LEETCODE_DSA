class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n+1,true);
        if(n<2) return 0;
        int count=0;
        prime[0]= false;
        prime[1]= true;
        for( int i =2;i*i<=n;i++){
            if( prime[i]== true){

            } for( int j =i*i;j<n;j+=i){
                prime[j]=false;
            }
        }
         for ( int i =2;i<n;i++){
            if( prime[i]== true){
                count++;
            }
         }
        return count;
    }
};