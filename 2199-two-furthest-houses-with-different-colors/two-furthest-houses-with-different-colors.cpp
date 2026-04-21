class Solution {
public:
    int memo[101][101];

    int solve(vector<int>& colors, int left, int right) {
        if (left >= right) return 0;
        if (memo[left][right] != -1) return memo[left][right];

        if (colors[left] != colors[right])
            return memo[left][right] = right - left;

        return memo[left][right] = max(solve(colors, left, right - 1),
                                       solve(colors, left + 1, right));
    }

    int maxDistance(vector<int>& colors) {
        memset(memo, -1, sizeof(memo));
        return solve(colors, 0, colors.size() - 1);
    }
};