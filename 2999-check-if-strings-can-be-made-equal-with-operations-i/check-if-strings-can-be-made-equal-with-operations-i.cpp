class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string temp10=s1;
        swap(temp10[0],temp10[2]);
        string temp11=s1;
        swap(temp11[1],temp11[3]);
        string temp=temp10;
        swap(temp[1],temp[3]);
        if(s1==s2||temp10==s2 || temp11==s2 || temp==s2) return true;
        else return false;
    }
};