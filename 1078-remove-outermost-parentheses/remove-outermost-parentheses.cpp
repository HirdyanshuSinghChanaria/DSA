class Solution {
public:
    string removeOuterParentheses(string s) {
        int i=0,n=s.length(),j;
        string ans="";
        unordered_map<char,int>mp;
        // while(j<n){

        // }
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