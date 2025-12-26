class Solution {
public:
    int bestClosingTime(string customers) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int max_score=0;
        int cur_score=0;
        int best_hour=0;
        int n = customers.size();
        for(int i=0;i<n;i++) {
            if(customers[i]=='Y') cur_score++;
            else cur_score--;
            if(cur_score>max_score) {
                max_score = cur_score;
                best_hour = i + 1;
            }
        }
        return best_hour;
    }
};