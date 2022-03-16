class Solution(object):
    def validateStackSequences(self, pushed, popped):
        """
        :type pushed: List[int]
        :type popped: List[int]
        :rtype: bool
        """
        stack = []
        i = 0
        
        for x in pushed:
            stack.append(x)
            
            while stack and stack[-1] == popped[i]:
                i = i + 1
                
                stack.pop()
        return len(stack) == 0
            
        
   