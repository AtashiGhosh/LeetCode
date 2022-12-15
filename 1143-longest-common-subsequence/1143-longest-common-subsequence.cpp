class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        
        int cur_val, pre_val;
        vector<int> dp(n+1, 0);
        for(int i=1;i<=m;++i) {
            pre_val = 0;
            for(int j=1;j<=n;++j) {
                cur_val = dp[j];
                dp[j] = max({dp[j], dp[j-1], pre_val + (text1[i-1]==text2[j-1])});
                pre_val = cur_val;
            }
        }
        return dp[n];
    }
};