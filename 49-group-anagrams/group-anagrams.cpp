class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string temp;
        // vector<string>a;
        int n=strs.size();
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};