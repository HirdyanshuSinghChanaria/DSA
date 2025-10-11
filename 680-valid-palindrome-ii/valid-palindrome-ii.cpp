class Solution {
public:
    bool ispali(string &s,int i,int j){
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
            // else {cout << i << "=" <<s[i] <<endl<< j << "=" << s[j]; return false;}
            // i++;j--;
        }
        return true;
    }
};
// "p uufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupu c"

// "acbcba"