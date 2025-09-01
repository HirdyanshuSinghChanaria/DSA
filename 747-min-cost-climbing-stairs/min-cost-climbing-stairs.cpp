class Solution {
public:
int n;
int solve(int idx,int sum,vector<int>&cost, vector<int> &dp){
 
    if(idx>=n)return 0;
    if(dp[idx]!=-1)return dp[idx];
    int first = cost[idx] + solve(idx+1, sum + cost[idx] , cost,dp);
    int second= cost[idx] +  solve(idx+2, sum + cost[idx] ,cost,dp);

    return dp[idx]=min(first,second);

}
    int minCostClimbingStairs(vector<int>& cost) {
        n=cost.size();
        vector<int> dp(n+1,-1);
        int first= solve(0,0,cost,dp);
        int second= solve(1,0,cost,dp);

        return min(first,second);


    }
};