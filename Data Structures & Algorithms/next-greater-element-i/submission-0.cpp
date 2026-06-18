class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;

        for(int i =0;i<nums2.size();i++){
            for(int j =i+1;j<nums2.size();j++){
                if(nums2[j]>nums2[i]){
                    mpp[nums2[i]] = nums2[j];
                    break;
                }
            }
        } 

        vector<int> ans;

        for(int i =0;i<nums1.size();i++){
            if(mpp.find(nums1[i])!=mpp.end()) {
                ans.push_back(mpp[nums1[i]]);
            }
            else{
                ans.push_back(-1);
            }
        } 

        return ans;
    }
};