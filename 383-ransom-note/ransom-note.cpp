class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>mag1(30,0),rans(30,0);
        if(magazine.length()<ransomNote.length()) return false;
        for(int i=0;i<magazine.length();i++){
            mag1[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            rans[ransomNote[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            cout<<i<<" "<<rans[i]<<"\t\t"<<i<<" "<<mag1[i]<<endl;
            if(rans[i]!=0&&rans[i]>mag1[i]){
                return false;
            }
        }
        return true;
    }
};