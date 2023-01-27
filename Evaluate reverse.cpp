class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<long long> st;
        for(string s: tokens){
            if(s=="+" || s=="-" || s=="*" || s=="/"){
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                if(s=="+") st.push(b+a);
                else if(s=="-") st.push(b-a);
                else if(s=="*") st.push(b*a);
                else st.push(b/a);
            }
            else st.push((int)stoi(s));
        }
        return st.top();
        
    }
};
