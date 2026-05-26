class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();
        if(n==1) return 0;
        unordered_map<char,int>count;
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z') count[word[i]]=1;
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(word[i]>='a' && word[i]<='z'){
                if(count[word[i]-'a'+'A']==1){ c++; count[word[i]-'a'+'A']=2;}
            }
        }
        return c;
    }
};