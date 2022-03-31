class Solution:
    def splitArray(self, nums: List[int], m: int) -> int:
        def fulfill(x):
            count = 0
            s = 0
            for y in nums:
                if s + y > x:
                    count += 1
                    s = y
                else:
                    s += y
            if s <= x:
                count += 1
            return count <= m
        
        low, high = max(nums), sum(nums)
        while low < high:
            mid = low + (high - low) // 2
            if fulfill(mid):
                high = mid
            else:
                low = mid + 1
        return low