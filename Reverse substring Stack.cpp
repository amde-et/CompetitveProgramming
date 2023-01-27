class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stk;
        string st;
        for(int i=0;i<s.size();i++){
            if(s[i]!=')')stk.push(s[i]);
            else {
                while(stk.top()!='('){
                    st+=stk.top();
                    stk.pop();
                }
                stk.pop();
                int i=0;
                while(i<st.size()){
                    stk.push(st[i]);
                    i++;
                } 
                    st.clear();
            }
            
        }
        while(stk.size()>0){
            st+=stk.top();
                    stk.pop();
        }
        reverse(st.begin(),st.end());
        return st;
    }
};
