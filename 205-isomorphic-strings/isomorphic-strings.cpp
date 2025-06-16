class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>a,b;
        for(int i=0;i<s.length();i++){
            if(a.count(s[i])){
                if(a[s[i]]!=t[i]) return false;
            }
            else{
                a[s[i]]=t[i];
            }
            if(b.count(t[i])){
                if(b[t[i]]!=s[i]) return false;
            }
            else{
                b[t[i]]=s[i];
            }
        }
        return true;
    }
};