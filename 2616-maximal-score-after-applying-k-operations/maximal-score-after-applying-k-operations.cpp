class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n=nums.size();
        long long score=0;
        priority_queue<long long>a;
        for(int i=0;i<n;i++) a.push(nums[i]);
        while(k--){
            score+=a.top();
            int t=ceil(a.top()/3.0);
            a.pop();
            a.push(t);
        }
        return score;
    }
};