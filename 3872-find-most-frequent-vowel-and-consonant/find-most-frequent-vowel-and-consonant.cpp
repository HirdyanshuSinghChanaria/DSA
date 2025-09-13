class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>alp(26,0);
        int vov=0,cons=0;
        for(int i=0;i<s.length();i++){
            alp[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                vov=max(vov,alp[s[i]-'a']);
            }
            else{
                cons=max(cons,alp[s[i]-'a']);
            }
        }
        return vov+cons;
    }
};