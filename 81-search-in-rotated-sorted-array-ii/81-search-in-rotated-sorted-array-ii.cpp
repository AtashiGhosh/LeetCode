class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int n = nums.size(), l = 0, r = n - 1;
        
        while(l <= r){
            int m = l + (r-l)/2;
            
            if(nums[m] == target) return true;
            
            else if(nums[l] == nums[m] && nums[r] == nums[m]) l++, r--;
            
            else if(nums[l] <= nums[m]){
                
                if(nums[l] <= target && nums[m] > target) r = m - 1;
                else l = m + 1;
            }
            else {
                if(nums[r] >= target && nums[m] < target) l = m + 1;
                else r = m - 1;
            }
            
        }
        return false;
    }
};