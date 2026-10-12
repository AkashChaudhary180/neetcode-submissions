class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq; // max-heap

        unordered_map<int,int> mpp;
        
        for(auto it : nums){
            mpp[it]++;
        }

        for(auto it : mpp){
            pq.push({it.second,it.first});
        }

        vector<int> ans;
        int c = 0;

        while(c<k){
            c++;
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
