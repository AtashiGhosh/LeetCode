class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        r = {}
        m = {}
        
        for l in ransomNote:
            if l in r:
                r[l] += 1
            else:
                r[l] = 1
    
        for l in magazine:
            if l in m:
                m[l] += 1
            else:
                m[l] = 1

        for i in r:
            if i not in m or m[i] < r[i]:
                return False
        return True