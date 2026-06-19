class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {

        // yha pr stack indexes store krrha hai

        int n = nums.size();
        vector<int> ans(n,0);

        stack<int> s;

        for(int i = n-1;i>=0;i--){
            while(s.size()>0 && nums[s.top()]<=nums[i]){
                s.pop();
            }
            if(!s.empty()){
                ans[i] = s.top() - i;
            }
            s.push(i);
        }

        return ans;
    }
};