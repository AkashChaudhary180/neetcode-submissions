class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        unordered_map<int,int> mpp;

        for(auto it : nums){
            mpp[it]++;
        } 

        vector<int> a;
        for(auto it : mpp){
            a.push_back(it.first);
        } 
        nums = a;
        sort(nums.begin(),nums.end());

        return mpp.size();
        
    }
};