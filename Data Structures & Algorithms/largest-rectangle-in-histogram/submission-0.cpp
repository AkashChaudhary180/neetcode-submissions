class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nsr;
        vector<int> nsl;

        stack<int> s1;
        int n = heights.size();

        for(int i = n-1; i >= 0; i--){
            while(s1.size()>0 && heights[i]<=heights[s1.top()]) s1.pop();
            if(s1.empty()) nsr.push_back(n);
            else nsr.push_back(s1.top());

            s1.push(i);
        } 

        reverse(nsr.begin(),nsr.end());

        stack<int> s2;

        for(int i =0;i<n;i++){
            while(s2.size()>0 && heights[i]<= heights[s2.top()]) s2.pop();

            if(s2.empty()) nsl.push_back(-1);
            else nsl.push_back(s2.top());

            s2.push(i);
        }

        int maxi = INT_MIN;

        for(int i = 0;i<n;i++){
            int curarea = heights[i]*(nsr[i]-nsl[i]-1);
            maxi = max(maxi,curarea);
        }

        return maxi;


    }
};