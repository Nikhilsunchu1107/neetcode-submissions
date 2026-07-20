class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int i = 0, j = n.size() - 1;
        while(i < j) {
            int sum = n[i] + n[j];
            if(sum < t) i++;
            else if (sum > t) j--;
            else return {i+1, j+1};
        }
    }   
};
