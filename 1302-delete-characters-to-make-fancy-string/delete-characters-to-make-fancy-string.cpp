class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length(),count=1;
        if(n==1||n==2) return s;
        string ans = string(1, s[0]);
        int i=0,j=1;
        while(j<n && i<n){
            if(s[i]==s[j]){
                count++;
                if(count<=2){
                    ans+=s[j];
                }
                j++;
                i++;
            }
            else{
                count=1;
                ans+=s[j];
                i=j;
                j++;
            }
            // for(int j=i+1;j<n;j++){
            //     if(s[i]==s[j]){
            //         if(count<)
            //         count++;
            //     } 
            //     if(s[i]!)
            // }
        }
        return ans;
    }
};