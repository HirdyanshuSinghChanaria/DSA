class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size(),l=0,r=n-k-1,ans=0;
        if(k==n) return accumulate(cardPoints.begin(),cardPoints.end(),0);
        int winds=accumulate(cardPoints.begin(),cardPoints.begin()+r+1,0);
        int temp=accumulate(cardPoints.begin()+r+1,cardPoints.end(),0);
        int tsum=winds+temp;
        while(r<n-1){
            ans=max(ans,tsum-winds);
            winds=winds-cardPoints[l]+cardPoints[r+1];
            l++;r++;
        }ans=max(ans,tsum-winds);
        return ans;
    }
};