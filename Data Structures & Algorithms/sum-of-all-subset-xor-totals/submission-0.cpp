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
    int subsetXORSum(vector<int>& nums) {
        vector<int> output;

        findsub(nums,output);

        int total = 0;

        for(int i =0;i<ans.size();i++){
            int xor1 = 0;
            for(int j= 0;j<ans[i].size();j++){
                xor1 = xor1^ans[i][j];
            }
            total+=xor1;
        }

        return total;
    }
};