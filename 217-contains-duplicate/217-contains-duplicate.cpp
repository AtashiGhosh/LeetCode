class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> res(nums.begin(), nums.end());
        return res.size() < nums.size();
    }
};

