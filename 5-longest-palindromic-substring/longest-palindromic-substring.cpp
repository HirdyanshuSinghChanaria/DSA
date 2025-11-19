class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int ml=0,mr=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int l=i-1,r=i+1;
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                if(r-l+1>ans){
                    ans=r-l+1;
                    ml=l;
                    mr=r;
                }
                l--;r++;
            }
            int l2=i,r2=i+1;
            while(r2<=n-1 && l2>=0 && s[l2]==s[r2]){
                if(r2-l2+1>ans){
                    ans=r2-l2+1;
                    ml=l2;
                    mr=r2;
                }
                l2--;r2++;
            }
        }
        string res = s.substr(ml, mr-ml+1);
        return res;
    }
};

// b a b a d
// b