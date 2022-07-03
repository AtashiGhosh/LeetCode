class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int increase = 1, decrease = 1;
        for(int i=1; i< nums.size(); i++){
            if(nums[i] > nums[i-1]) increase = decrease+1;
            else if(nums[i] < nums[i-1])  decrease = increase+1;
        }
        return max(increase,  decrease);
        
    }
};