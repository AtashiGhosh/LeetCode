class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int>v;
        if(n<m){
            for(int i =0;i<n;i++){
                if(binary_search(nums2.begin(),nums2.end(),nums1[i])){
                    v.push_back(nums1[i]);
                    auto it = find(nums2.begin(), nums2.end(), nums1[i]);
                    nums2.erase(it);
                }
            }
        }
        else{
            for(int i =0;i<m;i++){
                if(binary_search(nums1.begin(),nums1.end(),nums2[i])){
                    v.push_back(nums2[i]);
                    auto it = find(nums1.begin(), nums1.end(), nums2[i]);
                    nums1.erase(it);
                }
            }
        }
        return v;
    }
    
};