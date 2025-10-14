class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int i=0,j,n=nums.size();
        if(n==2 || k==1) return true;
        while(i+2*k<=n){
            int a;
            j=i+k;
            for(a=0;a<k-1;++a){
                if(nums[i+a]>=nums[i+a+1] || nums[j+a]>=nums[j+a+1]) {i++;break;}
            }
            // cout<<a<<endl;
            if(a==k-1) return true;
            // i++;
        }
        return false;
    }
};
// k=3
// [-7,2,12,19,-18,-17,-7]
// 1 2 3 2 3 1 2 3 4 5 6
// [5,8,-2,-1]
// [-15,-13,4,7]
// [1,2,3,4,4,4,4,5,6,7]  k=5
//  i         j
// [2,5,7,8,9,2,3,4,3,1]