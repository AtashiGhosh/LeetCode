class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        cur, ans = 0,0
        for n in nums:
            cur = max(cur +n , 0)
            ans = max(cur, ans)
        return ans or max(nums)
        
    