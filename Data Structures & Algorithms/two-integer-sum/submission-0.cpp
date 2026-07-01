class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indices;
        // int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (indices.find(diff) != indices.end()) return {indices[diff], i};
            indices.emplace(nums[i], i);
        }
        return {};
    }
};
