class Solution {
public:
    long long ans=0;
    bool neg=false;
    void print(string s,int l,int i,bool &sign){
        // if(s.length()>10) {ans=long(INT_MAX)+1;}
        if((i==l) || (sign==true && (s[i]=='-'||s[i]=='+')) || (sign==true && s[i]==' ')) return;
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<'Z') || s[i]=='.') return;
        if((s[i]=='-'||s[i]=='+'||(s[i]>='0'&&s[i]<='9')) && sign==false) {
            if(s[i]=='-') {neg=true;}
            sign=true;
        }
        if(ans>=(long)INT_MAX+1){ans=long(INT_MAX)+1;return;}
        if(s[i]>='0'&&s[i]<='9') ans=ans*10+(s[i]-'0');
        print(s,l,i+1,sign);
    }
    int myAtoi(string s) {
        int l=s.length(),i=0;
        long max=INT_MAX,min=INT_MIN;
        bool sign=false;
        print(s,l,i,sign);
        if(ans>max && neg==false) return max;
        else if(ans>max && neg==true) return min;
        return (neg==true)?-ans:ans;
    }
};