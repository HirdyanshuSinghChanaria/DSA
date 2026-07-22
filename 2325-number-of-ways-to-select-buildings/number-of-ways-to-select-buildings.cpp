class Solution {
public:
    long long numberOfWays(string s) {
        int n=s.length();
        long long ones=0,zeros=0;
        for(int i=0;i<n;i++){(s[i]=='1' ? ones++ : zeros++);}
        long long leftzero=0,leftone=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans+=leftzero * (zeros-leftzero);
                leftone++;
            }
            else{
                ans+=leftone * (ones-leftone);
                leftzero++;
            }
        }
        return ans;
    }
};