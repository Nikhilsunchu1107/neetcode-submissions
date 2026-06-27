class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        
        int lprod = 1;
        for (int i = 0; i < n; i++) {
            output[i] *= lprod;
            lprod *= nums[i];
        }

        int rprod = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= rprod;
            rprod *= nums[i];
        }

        return output;
    }
};
