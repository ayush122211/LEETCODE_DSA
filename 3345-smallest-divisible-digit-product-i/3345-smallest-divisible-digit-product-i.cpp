class Solution {
public:
int productofdigit( int n){
    int product=1;
    int temp=n;
    while(temp!=0){
        int lastd=temp%10;
        temp=temp/10;
        product*=lastd;
    }
     return product;
}
    int smallestNumber(int n, int t) {
        int ans=0;
        while(ans==0){
         if (productofdigit(n)%t==0){
            ans=n;
         }
         n++;
        }
        return ans;
    }
};