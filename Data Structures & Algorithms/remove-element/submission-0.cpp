class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==val){
                for(int j = i+1;j<n;j++){
                    if(nums[j]!=val){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        } 
        int ans = 0;

       for(int i = n-1;i>=0;i--){
        if(nums[i]==val) ans++;
        else if(nums[i]!=val) break;
       } 

       return n - ans ;
    }
};