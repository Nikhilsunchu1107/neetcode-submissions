class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;
        for (int num : nums) {
            if (!s.contains(num - 1)) {
                int len = 1;
                while(s.contains(num+len)) len++;
                ans = max(ans, len);
            }
        }

        return ans;
    }
};
