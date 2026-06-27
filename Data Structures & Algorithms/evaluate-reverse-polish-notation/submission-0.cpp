class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(const string& c: tokens) {
            if (c == "+") {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();
                st.push(val1 + val2);
            
            } else if (c == "-") {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();
                st.push(val1 - val2);

            } else if (c == "*") {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();
                st.push(val1 * val2);

            } else if(c == "/") {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();
                st.push(val1 / val2);
                
            } else {
                st.push(stoi(c));                
            }
        }
        return st.top();
    }
};
