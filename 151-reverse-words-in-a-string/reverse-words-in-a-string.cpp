class Solution {
public:
    string reverseWords(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=s.length();
        stack<string>st;
        string ans="",word="";
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9') word+=s[i];
            else if(s[i]==' ') {
                if(word.length()>0){
                    cout<<word<<endl;
                    st.push(word);
                    st.push(" ");
                }
                word="";
            }
        }
        st.push(word);
        int count=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        int sz=ans.length();
        if(ans[0]==' ') return ans.substr(1,sz);
        return ans;
    }
};