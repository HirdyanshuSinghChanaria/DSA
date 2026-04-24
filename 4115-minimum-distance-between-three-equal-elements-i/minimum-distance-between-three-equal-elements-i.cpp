class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int m=INT_MAX;
        bool isp=false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        isp=true;
                        m=min(m,(abs(i-j)+abs(j-k)+abs(k-i)));
                    }
                }
            }
        }
        if(!isp) return -1;
        return m;
    }
};