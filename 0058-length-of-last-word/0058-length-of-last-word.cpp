class Solution {
public:
    int lengthOfLastWord(string s) {
  //  if( s.size()==1) return 1;
        int length=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '&& length==0) continue;
            if(s[i]==' ')break;
            length++;
        }
        return length;
    }
};