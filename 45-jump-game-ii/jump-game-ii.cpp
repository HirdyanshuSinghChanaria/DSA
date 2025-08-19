class Solution {
public:
    vector<int> dp;

    int solve(vector<int>& nums, int idx) {
        if (idx >= nums.size() - 1) {
            return 0; // already at or beyond last index
        }
        if (dp[idx] != -1) return dp[idx];

        int res = INT_MAX;
        for (int i = 1; i <= nums[idx] && idx + i < nums.size(); i++) {
            int sub = solve(nums, idx + i);
            if (sub != INT_MAX) { // avoid overflow
                res = min(res, sub + 1);
            }
        }
        return dp[idx] = res;
    }

    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        if (nums[0] >= nums.size() - 1) return 1;
        dp.resize(nums.size(), -1);
        return solve(nums, 0);
    }
};
