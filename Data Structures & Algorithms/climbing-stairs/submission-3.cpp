class Solution {
public:
    vector<int> c;
    int climbStairs(int n) {
        c.assign(n, -1);
        return dfs(n, 0);
    }

    int dfs(int n, int i) {
        if (i >= n) return i == n;
        if (c[i] != -1) return c[i];
        return c[i] = dfs(n, i+1) + dfs(n, i+2);
    }
};