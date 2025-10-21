class Solution {
public:
    int fi(int x,vector<int>&nums2){
        auto it=find(nums2.begin(),nums2.end(),x);
        // cout<<*it<<endl;
        int d=distance(nums2.begin(),it);
        for(int i=d;i<nums2.size();i++){
            if(nums2[i]>x) return nums2[i];
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(fi(nums1[i],nums2));
        }
        return ans;
    }
};