class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int i=0,j,n=nums.size();
        if(n==2 || k==1) return true;
        while(i+2*k<=n){
            int a;
            j=i+k;
            for(a=0;a<k-1;++a){
                if(nums[i+a]>=nums[i+a+1] || nums[j+a]>=nums[j+a+1]) {i++;break;}
            }
            if(a==k-1) return true;
        }
        return false;
    }
};