class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        stack<pair<int, int>> st;
        vector<int> res(n, 0);
        for(int i = 0; i < n; i++) {
            int t = temps[i];
            while(!st.empty() && t > st.top().first) {
                auto p = st.top(); st.pop();
                res[p.second] = i - p.second;
            }
            st.push({t, i});
        }
        return res;
    }
};
