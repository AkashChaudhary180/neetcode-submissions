class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(auto it : stones){
            pq.push(it);
        } 

        while(pq.size()>1){
            int w1 = pq.top();
            pq.pop();
            int w2 = pq.top();
            pq.pop();

            if(w1==w2) continue;
            int neww = w1 -w2;
            pq.push(neww); 
        } 
        if(pq.size()==0) return 0;

        return pq.top();
    }
};
