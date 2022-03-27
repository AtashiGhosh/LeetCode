class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int, int>> u;
        for (auto row = 0; row < mat.size(); row++) {
            auto count = accumulate(mat[row].begin(), mat[row].end(), 0);
            u.insert(make_pair(count, row));
        }
        vector<int> ans;
        for (auto it = u.begin(); it != u.end(), k > 0; k--, it++)
            ans.push_back(it->second);
        return ans;
        
    }
};