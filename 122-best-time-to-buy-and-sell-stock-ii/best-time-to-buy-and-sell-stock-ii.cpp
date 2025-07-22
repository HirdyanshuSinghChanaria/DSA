class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),i=0,j=1,ans=0;
        while(i<n && j<n){
            if(prices[i]<prices[j]){
                ans+=prices[j]-prices[i];
                i++;
                // i=j;
                j=i+1;
                
            }
            else{
                i++;
                j++;
            }
            // if(j>=n-1){
            //     i++;
            //     j=i;
            // }
        }
        return ans;
    }
};