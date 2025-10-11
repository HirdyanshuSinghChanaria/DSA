class Solution {
public:
    bool ispali(string &s,int i,int j){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length(),count=0;
        // cout<<"size="<<n<<endl;
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]==s[j]) {i++;j--;}
            else if(count==0){
                if(ispali(s,i+1,j) || ispali(s,i,j-1)) return true;
                else return false;
                count=1;
            }
        }
        return true;
    }
};
// "p uufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupu c"

// "acbcba"