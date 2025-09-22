class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==threshold) return nums[n-1];
        int l=1,r=1e9,mid,ans=-1;
        vector<int>temp;
        while(l<=r){
            temp=nums;
            mid=(l+r)/2;
            for(int i=0;i<n;i++) temp[i]=ceil(temp[i]/(mid*1.0));
            int check = 0;
            int sum =0;
            for(int i=0;i<n;i++){
                sum+=temp[i];
                if(sum>threshold){
                    l=mid+1;
                    check = 1;
                    break;
                }
            }
            if(check)continue;
            // sum=accumulate(temp.begin(),temp.end(),0ll);

            if(sum<=threshold) {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
            // else r=mid-1;
        }
       
        return ans;
    }
};