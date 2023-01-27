class MinStack {
public:
    stack<int> st;
    map<int,int> map;
    
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        map[val]++;
    }
    
    void pop() {
        int temp= st.top();
        st.pop();
        if(--map[temp] ==0 )map.erase(temp);
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return map.begin()->first ;
    }
};
