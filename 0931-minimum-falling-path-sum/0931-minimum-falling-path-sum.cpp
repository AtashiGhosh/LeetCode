class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
        
        
        int n = m.size();
        
        for(int r = n-2; r >= 0; --r)
        {
            for(int c = n-1; c >= 0; --c)
            {
                m[r][c] += min({m[r+1][max(c-1,0)], 
                               m[r+1][c],
                               m[r+1][min(c+1,n-1)] });
            }
        }
        return *min_element(m[0].begin(), m[0].end());
    }
};