class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costboth, int need1, int need2) {
        long long ans=0;
          long long combinecost=0;
        long long separatecost= (1LL*cost1*need1) + (1LL* cost2*need2);
         if( need1>need2){ 
            int diff =need1-need2;
             combinecost= (1LL*need2*costboth)+( 1LL*diff*cost1) ;
         }  else if  ( need1==need2){
             combinecost= 1LL*need1*costboth;
         } else {
              int diff =need2-need1;
              combinecost= (1LL*need1*costboth)+(1LL* diff*cost2) ;
         }
           long long  onlytype3=1LL* max(need1,need2)*costboth;
         ans= min(separatecost, combinecost);
         ans= min( ans,  onlytype3);
         return ans;
    }
};