class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_map<int,int> mapp;
      for(int i = 0;i<nums.size();i++){
        mapp[nums[i]]++;
      } 
      for(auto it:mapp){
        if(it.second>1){ return true; }
    
      } 
      return false;
    }
};