class MinStack {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        pq.push(val);
    }
    
    void pop() {
        int val = s.top();
        s.pop();

        vector<int> a;

        while(pq.top()!=val){
            a.push_back(pq.top());
            pq.pop();
        }

        pq.pop();

        for(auto it : a){
            pq.push(it);
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return pq.top();
    }
};
