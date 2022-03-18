class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        count = Counter(s)
        v = set()
        stack = []

        for c in s:
            if c not in v:
                while stack and stack[-1] > c and count[stack[-1]] > 0:
                    v.remove(stack.pop())
                stack.append(c)
                v.add(c)
            count[c] -= 1
        return "".join(stack)