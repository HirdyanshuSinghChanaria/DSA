class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size(),i=0,j=n-1;
        int maxscore=0,score=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                maxscore=max(maxscore,score);
                i++;
            }
            else if(score>=1){
                power+=tokens[j];
                score--;
                j--;
            }
            else{
                return maxscore;
            }
        }
        return maxscore;
    }
};