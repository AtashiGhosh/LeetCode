class Solution {
public:
    int waysToSplit(vector<int>& nums) {
        int n = nums.size(), mod = 1e9 + 7;
        vector<int> s(n + 1);
        for (int i = 1; i <= n; i ++ ) s[i] = s[i - 1] + nums[i - 1];

        int ans = 0;
        for (int i = 3, j = 2, k = 2; i <= n; i ++ ) {
            while (s[n] - s[i - 1] < s[i - 1] - s[j - 1]) j ++ ; 
            while (k + 1 < i && s[i - 1] - s[k] >= s[k]) k ++ ;
            if (j <= k && s[n] - s[i - 1] >= s[i - 1] - s[j - 1] && s[i - 1] - s[k - 1] >= s[k - 1])
                ans = (ans + k - j + 1) % mod;
        }
        return ans;
    }
};