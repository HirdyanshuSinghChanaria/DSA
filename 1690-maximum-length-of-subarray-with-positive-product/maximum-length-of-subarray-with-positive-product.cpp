class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size(),p0=0,s0=0,pre=1,suff=1,ml=0,ans=0;
        int tl=n;
        for(int i=0;i<n;i++){
            if(pre==0){
                p0=0;
                pre=1;
            }
            if(suff==0){
                suff=1;
                s0=0;
            }
            if(nums[i]<0) nums[i]=-1;
            else if(nums[i]>0) nums[i]=1;
            if(nums[n-i-1]<0) nums[n-i-1]=-1;
            else if(nums[n-i-1]>0) nums[n-i-1]=1;
            pre=pre*nums[i];
            suff=suff*nums[n-i-1];
            int m=0,l=0;
            if(pre>0){
                m=p0+1;
                
            }
            if(suff>0){
                l=s0+1;
            }
            s0++;
            p0++;
            ml=max(ml,max(m,l));
        }
        return ml;
    }
};