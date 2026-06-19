class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for(auto it : operations){
            if(it == "+"){
                int n = ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }

            else if(it == "D"){
                ans.push_back(2*ans.back());
            }

            else if(it == "C"){
                ans.pop_back();
            }

            else{
                ans.push_back(stoi(it));
            }
        } 
        
        int totalsum = 0;

        for(auto it : ans){
            totalsum+=it;
        }

        return totalsum;
    }
};