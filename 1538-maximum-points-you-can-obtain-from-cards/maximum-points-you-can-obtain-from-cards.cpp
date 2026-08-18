class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size(),l=0,r=n-k-1,ans=0;
        int tsum=accumulate(cardPoints.begin(),cardPoints.end(),0);
        if(k==n) return tsum;
        int winds=accumulate(cardPoints.begin(),cardPoints.begin()+r,0);
        while(r<n){
            winds+=cardPoints[r];
            ans=max(ans,tsum-winds);
            winds=winds-cardPoints[l];
            l++;r++;
        }
        return ans;
    }
};