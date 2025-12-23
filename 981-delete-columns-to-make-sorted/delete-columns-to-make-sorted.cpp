class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int size=strs[0].length(),n=strs.size();
        int count=0;
        for(int i=0;i<size;i++){
            vector<char>a(n);
            int j;
            for(j=1;j<n;j++){
                if(strs[j][i]<strs[j-1][i]){count++;break;}
            }
            // if(j!=n) count++;
        }
        return count;
    }
};