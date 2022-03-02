class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        m=len(s)
        n=len(t)
        
        i=0
        j=0
        
        while j<m and i<n:
            if s[j] == t[i]:
                j=j+1
            i=i+1
          
        return j == m
    
            
        