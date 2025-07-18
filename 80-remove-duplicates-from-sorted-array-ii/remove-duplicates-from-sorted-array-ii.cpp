class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2,k=2,n=nums.size();
        if(n==1) return 1;
        if(n==2) return 2;
        while(i<n){
            if(nums[i]==nums[k-2]){
                i++;
            }
            else{
                nums[k]=nums[i];
                i++;
                k++;
            }
        }
        return k;
    }
};