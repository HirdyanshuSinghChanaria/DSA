#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
class Solution {
public:
    int bestClosingTime(const string& customers) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int max_score=0;
        int cur_score=0;
        int best_hour=0;
        const char* str=customers.c_str();
        const int n=customers.size();
        for(int i=0;i<n;++i){
            cur_score+=(str[i]=='Y')*2-1;
            if(cur_score>max_score){
                max_score=cur_score;
                best_hour=i + 1;
            }
        }
        return best_hour;
    }
};