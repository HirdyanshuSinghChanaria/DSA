const int N = 2500;
int dp[N+1][N+1];
class Solution {
public:
    int f(int i, int prev, int n, vector<int>&arr){
        if(i >= n)return 0;
        if(dp[i][prev+1] != -1)return dp[i][prev+1];
        int nottake =f(i+1, prev, n, arr);
        int take =0;
        if(prev == -1 or arr[i] > arr[prev]){
            take =1+f(i+1, i, n, arr);
        }
        return dp[i][prev+1]  = max(take, nottake);
    }
    int lengthOfLIS(vector<int>& arr) {
        int n = (int)arr.size();
        memset(dp, -1, sizeof(dp));
        return f(0, -1, n, arr);
    }
};