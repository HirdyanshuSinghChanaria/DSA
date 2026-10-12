class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int idx=1,sum=0,n=nums.size();
        for(int i=0;i<n;i++,idx++){
            // cout<<nums[i]<<endl;
            if(n%idx==0) sum+=(nums[i]*nums[i]);
            // cout<<sum<<endl;
        }
        return sum;
    }
};