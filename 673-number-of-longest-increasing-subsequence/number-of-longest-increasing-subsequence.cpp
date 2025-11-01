class Solution {
public:
    int findNumberOfLIS(vector<int>& arr) {
        int n = (int)arr.size();
        vector<int>len(n, 1), cnt(n, 1);
        for(int i =0; i<n; i++){
            for(int j =0 ; j<i; j++){
                if(arr[j] < arr[i]){
                    if (len[j] + 1 > len[i]) {
                        len[i] = len[j] + 1;
                        cnt[i] = cnt[j];
                    } else if (len[j] + 1 == len[i]) {
                        cnt[i] += cnt[j];
                    }
                }
            }
        }
        int mx = *max_element(len.begin(), len.end());
        int ans =0;
        for(int i =0; i< n; i++){
            if(len[i] == mx)ans+= cnt[i];
        }
        return ans;
    }
};