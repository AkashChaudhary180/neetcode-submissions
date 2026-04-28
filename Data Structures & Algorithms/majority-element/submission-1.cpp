class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0];
        int fre = 1;

        for(int i =1;i<nums.size();i++){
            if(fre==0){
                maj = nums[i];
                fre =1;
            }
            else if(nums[i]==maj) fre++;
            else if(nums[i]!=maj){
                fre--;
            }
        }

        return maj;
    }
};