class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<2*n;i++){
            int index=i%n;
            while(!st.empty()&& nums[index]>nums[st.top()]){
                ans[st.top()]=nums[index];
                st.pop();
            }
            if(i<n)st.push(index);
        }
        return ans;
    }
};