class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ans=-1,n1=nums1.size(),n2=nums2.size();
        unordered_set<int>st;
        for(int i=0;i<n1;i++){
            st.insert(nums1[i]);
        }
        int s,prev=0;
        for(int i=0;i<n2;i++){
            s=st.size();
            st.insert(nums2[i]);
            if(s==st.size() && prev!=nums2[i]) return nums2[i];
            prev=nums2[i];
        }
        return ans;
    }
};