class Solution {
public:
    vector<string> ans;
    bool isvalid(string output){
        stack<char>st;
        for(auto it : output){
            if(it=='(') st.push('(');
            else if(it==')'){
                if(st.size()>0) st.pop();
                else return false;
            }
        } 

        if(st.size()!=0) return false; 

        return true;
    }
    void solve(int n , string output){
        if(output.length() == 2*n){
            if(isvalid(output)){
                ans.push_back(output);
            }
            return;
        }

        output.push_back('(');
        solve(n,output);
        output.pop_back();

        output.push_back(')');
        solve(n,output);
        output.pop_back();
    }
    vector<string> generateParenthesis(int n) {

        string output = "";
        solve(n,output);

        return ans;
        
    }
};