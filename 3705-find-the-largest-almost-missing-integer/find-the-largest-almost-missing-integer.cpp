class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int l=0,r=1,n=nums.size();
        if(k==n){
            sort(nums.begin(),nums.end());
            return nums[n-1];
        }
        if(n==1) return nums[0];
        priority_queue<int>q;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        if(k==1){
            for(auto it:mp){
                if(it.second==1) q.push(it.first);
            }
            if(q.size()==0) return -1;
            return q.top();
        }
        if(mp[nums[0]]>1 && mp[nums[n-1]]>1) return -1;
        else if(mp[nums[0]]==1 && mp[nums[n-1]]==1) return max(nums[0],nums[n-1]);
        else{
            if(mp[nums[0]]==1) return nums[0];
        }
        return nums[n-1];
    }
};