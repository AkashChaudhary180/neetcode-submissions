class Solution {
public:
    typedef pair<int,int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        for(auto it : nums){
            mpp[it]++;
        } 
        
        priority_queue<p,vector<p>,greater<p>> pq;

        for(auto it : mpp){
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        } 

        vector<int> ans;

        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        } 

        return ans;
    }
};
