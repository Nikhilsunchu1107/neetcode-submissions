class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        vector<int> res(n, 0);
        for(int i = n-2; i >= 0; i--) {
            int j = i + 1;
            while(j < n && temps[j] <= temps[i]) {
                if (res[j] == 0) {
                    j = n;
                    break;
                }
                j += res[j];
            }
            if (j < n) res[i] = j - i;
        }
        return res;
    }
};
