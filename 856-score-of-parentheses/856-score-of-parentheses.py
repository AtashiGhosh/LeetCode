class Solution(object):
    def scoreOfParentheses(self, s):
        """
        :type s: str
        :rtype: int
        """
        stack, curr = [], 0
        for i in s:
            if i == '(':
                stack.append(curr)
                curr = 0
            else:
                curr += stack.pop() + max(curr, 1)
        return curr