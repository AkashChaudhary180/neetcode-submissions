class Solution {
public:
    vector<vector<int>> ans;

    void findsub(vector<int>nums,vector<int>&output){
        if(nums.size()==0){
            ans.push_back(output);
            return;
        }

        vector<int> out1 = output;
        vector<int> out2 = output;

        out2.push_back(nums[0]);
        nums.erase(nums.begin());

        findsub(nums,out1);
        findsub(nums,out2);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        findsub(nums,output);

        return ans;
    }
};
