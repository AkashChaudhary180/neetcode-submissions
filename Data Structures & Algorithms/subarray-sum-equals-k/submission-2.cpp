class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> mpp;

        mpp[0] = 1;

        int prefix_sum = 0 ;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            prefix_sum+=nums[i];
            int remove = prefix_sum-k;

            cnt+=mpp[remove];

            mpp[prefix_sum]++;

        } 

        return cnt;
    }
};