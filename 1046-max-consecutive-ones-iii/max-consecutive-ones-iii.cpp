class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,s=nums.size();
        // vector<int>zeros(s);
        // int z=0;
        // for(int i=0;i<s;i++){
        //     if(nums[i]==0) z++;
        //     zeros[i]=z;
        // }
        // while(r<s){
        //     if()
        // }
        int count=0,ans=0;
        while(r<s){
            if(nums[r]==0){
                count++;
            }
            if(count<=k) ans=max(ans,r-l+1);
            while(count>k){
                if(nums[l]==0) count--;
                l++;
            }
            r++;
        }
        return ans;
    }
};