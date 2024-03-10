class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(), nums1.end());
        vector<int> res;
        for(int a : nums2)
            if(s.erase(a))
                res.push_back(a);
        return res;
    }
};