class Solution {
public:
 string modified( string str){
    stack<char>st;
    string ans;
    for(int i =0;i<str.size();i++){
        if(str[i]!='#' ) { 
            st.push(str[i]);
        }
        else if(!st.empty()){ 

        st.pop();
        }
    }
        while(!st.empty()){
            ans+=st.top();
            st.pop();

        }
    
         
         reverse(ans.begin(),ans.end());
         
    
    return ans ;
 }
    bool backspaceCompare(string s, string t) {
         return modified(s)==modified(t);
    }
};