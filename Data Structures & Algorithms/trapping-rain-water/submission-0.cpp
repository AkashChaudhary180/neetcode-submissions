class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);

        left[0] = height[0];

        for(int i =1;i<n;i++){
            left[i] = max(left[i-1],height[i]);
        }

        right[n-1] = height[n-1];

        for(int i = n-2;i>=0;i--){
            right[i] = max(right[i+1],height[i]);
        } 

        int l = 0;
        int r = n-1;

        while(l < n && height[l] == 0) l++;
        while(r >= 0 && height[r] == 0) r--;

        long long sum = 0;

        for(int i = l;i<=r;i++){
            sum += (min(left[i],right[i]) -height[i]);
        }

        return sum;
    }
};
