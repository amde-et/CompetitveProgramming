class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
       
    }
    
    void push(int x) {
        if(this->s1.empty())
        {
            this->s1.push(x);
        }
        else{
            while(!this->s1.empty())
            {
                
                this->s2.push(this->s1.top());
                this->s1.pop();
            }
            this->s2.push(x);
            while(!this->s2.empty())
            {
                
                this->s1.push(this->s2.top());
                this->s2.pop();
            }
            
        }
    }
    
    int pop() {
        int temp=this->s1.top();
        this->s1.pop();
        return temp;
    }
    
    int peek() {
        return this->s1.top();
    }
    
    bool empty() {
        if(this->s1.empty())
        return true;
        else
        return false;
    }
};

