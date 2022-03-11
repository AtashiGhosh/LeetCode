class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        d={}
        for i in s:
            d[i] = d.get(i, 0) + 1
            
            
        for k in d:
            if d[k] == 1:
                return s.index(k)
        
        return -1