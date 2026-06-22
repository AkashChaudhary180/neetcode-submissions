class FreqStack {
public:
    unordered_map<int,int> mpp;
    priority_queue<vector<int>> pq;
    int timer =0;
    FreqStack() {
        
    }
    
    void push(int val) {
        mpp[val]++;
        pq.push({mpp[val],timer++,val});
    }
    
    int pop() { 

        auto it = pq.top();
        pq.pop(); 

        int val = it[2];
        mpp[val]--;

        return val;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */