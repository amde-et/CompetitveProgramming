class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> st;
        int n = t.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++) {
            if(st.empty()) {
                st.push(i);
            }
            else{
                while(!st.empty()&& t[st.top()] < t[i]) {
                    ans[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        return ans;
    }
};
