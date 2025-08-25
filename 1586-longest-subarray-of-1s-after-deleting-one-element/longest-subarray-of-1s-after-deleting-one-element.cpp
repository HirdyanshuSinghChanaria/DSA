class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int n=nums.size(),count,size,ans=0;
        for(int i=0;i<n;i++){
            size=0;
            count=0;
            for(int j=i;j<n;j++){
                if(nums[j]==1){
                    size++;
                }
                else{
                    if(count>0) break;
                    else size++;
                    count++;
                }
            }
            ans=max(ans,size);
            // if(count==0) return n-1;
        }
        return ans-1;
    }
};