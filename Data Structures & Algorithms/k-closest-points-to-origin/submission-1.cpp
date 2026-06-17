class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;

        for(auto it : points){
            int dis = it[0]*it[0] + it[1]*it[1];
            pq.push({dis,{it[0],it[1]}});

            if(pq.size()>k) pq.pop();

        }

        vector<vector<int>> ans;

        while(pq.size()>0){
            vector<int> a;
            a.push_back(pq.top().second.first);
            a.push_back(pq.top().second.second);
            ans.push_back(a);
            pq.pop();
        } 

        return ans;
    }
};
