class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> st;

    void solve(vector<int> nums,vector<int>& output){

        if(nums.size()==0){
            if(st.find(output)==st.end()){
            ans.push_back(output);
            st.insert(output);
            }
            return;
        }

        vector<int> out1 = output;
        vector<int> out2 = output;
        out2.push_back(nums[0]);

        nums.erase(nums.begin());

        solve(nums,out1);
        solve(nums,out2);

        return;

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> output;

        solve(nums,output);

        return ans;
    }
};