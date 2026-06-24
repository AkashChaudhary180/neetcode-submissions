class Solution {
public:
    typedef pair<int,char> p;
    string longestDiverseString(int a, int b, int c) {
        priority_queue<p> pq;
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});

        string ans = "";

        while(pq.size()>0){

            auto it = pq.top();
            pq.pop();
            int cnt1 = it.first;
            char ch1 = it.second;

            int n = ans.size();

            if(n>=2 && ans[n-1]==ch1 && ans[n-2]==ch1){
                if(pq.size()==0) break;

                auto i = pq.top();
                pq.pop();
                int cnt2 = i.first;
                char ch2 = i.second;

                ans+=ch2;
                cnt2--;
                
                if(cnt2!=0) pq.push({cnt2,ch2});

                pq.push({cnt1,ch1});
            }
            else{
                ans+=ch1;
                cnt1--;

                if(cnt1!=0) pq.push({cnt1,ch1});
            }

        } 

        return ans;
    }
};