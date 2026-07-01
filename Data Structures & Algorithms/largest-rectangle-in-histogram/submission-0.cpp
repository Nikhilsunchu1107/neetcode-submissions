class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int m = 0;
        stack<int> st;

        for (int i = 0; i <= n; i++) {
            int h = (i == n) ? 0 : heights[i];
            while(!st.empty() && heights[st.top()] >= h) {
                int j = st.top(); st.pop();
                int w = st.empty() ? i : (i - st.top() - 1);
                m = max(m, heights[j] * w);
            }
            st.push(i);
        }

        return m;
    }
};
