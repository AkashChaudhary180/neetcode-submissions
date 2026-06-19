class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(auto it : tokens){
            if(it=="+" || it == "-" || it == "*" || it == "/"){
                int val1 = s.top();
                s.pop();
                int val2 = s.top();
                s.pop();
                if(it=="+"){
                    s.push(val1+val2);
                }
                else if(it == "-"){
                    s.push(val2-val1);
                }
                else if(it == "*"){
                    s.push(val1*val2);
                }
                else{
                    s.push(val2/val1);
                }
            } 
            else{
                s.push(stoi(it));
            }
        } 

        return s.top();
    }
};
