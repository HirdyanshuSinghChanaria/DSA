class Solution {
public:

    int solve(string &s, int i, int j, vector<vector<int>>& dp){
        if(i==j) return 1;
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(s[i]==s[j]){
            ans = max(ans, solve(s, i+1, j-1, dp)+2);
        }
        ans = max(ans, solve(s, i+1, j, dp));
        ans = max(ans, solve(s, i, j-1, dp));
        return dp[i][j] = ans;
    }

    int longestPalindromeSubseq(string s) {
        int i=0,n=s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(s, 0, s.size()-1, dp);
        
    }
};

// bbbab
// i   j

// 3 conditions
// 1 : both same -> i++ and j--
// 2 : no match -> i++
// 3 : no match -> j--

// Base Case
// i==j -> return 1;
// i>j - > return 0;
