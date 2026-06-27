class Solution {
public:
    bool isOperator(string s) {
        if (s == "+" || s == "-" || s == "*" || s == "/") {
            return true;
        }
        return false;
    }
    
    int operate(string op, int a, int b) {
        if (op == "+") return a+b;
        if (op == "-") return a-b;
        if (op == "*") return a*b;
        if (op == "/") return a/b;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(const string& c: tokens) {
            if(isOperator(c)) {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();
                st.push(operate(c, val1, val2));
            } else {
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};
