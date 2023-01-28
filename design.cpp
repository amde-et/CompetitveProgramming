class MyCircularDeque {
public:int s;
  deque<int> q;int i=0;
    MyCircularDeque(int k) {
        s=k;
    }
    
    bool insertFront(int value) {
        if(i==s)
        return 0;
        q.push_front(value);
           i++;
        return 1;
    }
    
    bool insertLast(int value) {
        if(i==s)
        return 0;
        q.push_back(value);
           i++;
        return 1;
    }
    
    bool deleteFront() {
        if(i==0)
        return 0;
        q.pop_front();
        i--;
        return 1;
    }
    
    bool deleteLast() {
        if(i==0)
        return 0;
        q.pop_back();
        i--;
        return 1;
    }
    
    int getFront() {
         if(!q.empty())
        return q.front();
        return -1;
    }
    
    int getRear() {
         if(!q.empty())
        return q.back();
        return -1;
    }
    
    bool isEmpty() {
         return q.empty();
    }
    
    bool isFull() {
        if(q.size()==s) return 1;
        return 0;
    }
};

