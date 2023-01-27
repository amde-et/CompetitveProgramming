class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto i:s){
            if(i=='(' || i=='{' || i=='['){
                stk.push(i);
            }
            else{
                if( stk.empty() || (i==')' && stk.top()!='(') || (i=='}' && stk.top()!='{') || (i==']' && stk.top()!='[')){
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};
