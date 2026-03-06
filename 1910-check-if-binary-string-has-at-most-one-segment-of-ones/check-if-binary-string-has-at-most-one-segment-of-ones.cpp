class Solution {
public:
    bool checkOnesSegment(string s) {
        int size=s.length(),count=1;
        for(int i=0;i<size;i++){
            if(count==0 && s[i]=='1'){
                count=1;
                return false;
            } 
            else if(count==1 && s[i]=='0') count=0;
        }
        return true;
    }
};