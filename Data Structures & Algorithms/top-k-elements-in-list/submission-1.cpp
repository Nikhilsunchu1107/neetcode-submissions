class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int n : nums) {
            freq[n]++;
        }

        vector<pair<int,int>> a;
        for (const auto &p: freq) {
            a.push_back({p.second, p.first});
        }
        
        sort(a.rbegin(), a.rend());

        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(a[i].second);    
        }
        return ans;
    }
};
