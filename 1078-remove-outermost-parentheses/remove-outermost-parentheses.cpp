class Solution {
public:
    string removeOuterParentheses(string s) {
        ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        int i=0,n=s.length(),j;
        string ans="";
        unordered_map<char,int>mp;
        for(j=0;j<n;j++){
            mp[s[j]]++;
            if(mp['(']==mp[')']){
                ans+=s.substr(i+1,j-i-1);
                i=j+1;
            }
        }
        return ans;
    }
};