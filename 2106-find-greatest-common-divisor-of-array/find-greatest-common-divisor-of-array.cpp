class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size(),mini=nums[0],maxi=0,ans=1;
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }
        // cout<<maxi<<"  "<<mini<<endl;
        for(int j=2;j<=mini;j++){
            if(mini%j==0 && maxi%j==0) ans=j;
        }
        return ans;
    }
};