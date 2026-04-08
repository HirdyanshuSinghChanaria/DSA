class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=piles.size();
        if(h==n) return *max_element(piles.begin(),piles.end());
        int l=1,r=*max_element(piles.begin(),piles.end());
        int mid,ans=r;
        while(l<=r){
            mid=(l+r)/2;
            long sum=0,hr;
            for(int i=0;i<n;i++){
                if(piles[i]%mid==0) hr=piles[i]/mid;
                else hr=int(piles[i]/mid)+1;
                sum=sum+hr;
            }
            if(sum<=h){
                ans=min(ans,mid);
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};