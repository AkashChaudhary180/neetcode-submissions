class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        mpp[nums[0]] = 0;

        vector<int> ans;

        for(int i =1;i<nums.size();i++){
            int com = target - nums[i];
            if(mpp.find(com)!=mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[com]);
            } 
            else{
                mpp[nums[i]] = i;
            }

        } 
        sort(ans.begin(),ans.end());

        return ans;
    }
};
