class Solution {
public:
    int minSwaps(string s) {
        int n=s.length();
        string s1="",s2="";
        int c1=0,c0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') c1++;
            if(s[i]=='0') c0++;
            if(i%2==0) {s1=s1+'1';s2=s2+'0';}
            else {s1=s1+'0';s2=s2+'1';}
        }
        if((n%2==0 && c1!=c0)) return -1;
        if(n%2!=0 && (max(c1,c0)-min(c1,c0))!=1) return -1;
        if(n%2!=0){
            if(c1>c0) s2=s1;
            if(c0>c1) s1=s2;
        }
        int t1=0,t2=0,ans;
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i]) t1++;
            if(s[i]!=s2[i]) t2++;
            ans=min(t1,t2);
        }if(ans==0) return 0;
        cout<<"t1="<<t1<<" t2="<<t2<<endl;
        return ans/2;
    }
};