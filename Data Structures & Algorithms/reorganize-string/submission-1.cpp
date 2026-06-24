class Solution {
public:
    typedef pair<int,char> p;
    string reorganizeString(string s) {
        unordered_map<char,int> mpp;

        for(auto it : s){
            mpp[it]++;
        }

        priority_queue<p> pq;
        int len = s.size();
        int valid = (len+1)/2;

        for(auto it : mpp){
            if(it.second>valid) return "";
            pq.push({it.second,it.first});
        } 

        string ans = "";

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();

            char ch = it.second;
            int cnt = it.first;

            if( (ans.size()==0 || ans.size()>=1 )&& ans[ans.size()-1]!=ch){
                ans+=ch;
                cnt--;
                if(cnt>0) pq.push({cnt,ch});
            }
            else{  
                if(pq.empty()) return "";
                auto i = pq.top();
                pq.pop();
                char ch2 = i.second;
                int cnt2 = i.first;

                ans+=ch2;
                cnt2--;
                if(cnt2>0) pq.push({cnt2,ch2});

                pq.push({cnt,ch});
            }
        } 

        return ans;

    }
};