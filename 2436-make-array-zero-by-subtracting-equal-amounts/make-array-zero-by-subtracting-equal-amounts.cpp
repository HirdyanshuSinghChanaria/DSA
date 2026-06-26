class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int m=*min_element(nums.begin(),nums.end(),[](int a,int b){
                if(a==0) return false;
                if(b==0) return true;
                return a<b;
            });
            // cout<<m<<endl;
            if(m==0) break;
            count++;
            for(int j=0;j<nums.size();j++){
                if(nums[j]!=0) nums[j]=nums[j]-m;
            }
        }
        return count;
    }
};