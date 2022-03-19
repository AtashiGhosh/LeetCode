class FreqStack(object):

    def __init__(self):
        self.freq = collections.Counter()
        self.m = collections.defaultdict(list)
        self.maxf = 0

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        freq, m = self.freq, self.m
        freq[val] += 1
        self.maxf = max(self.maxf, freq[val])
        m[freq[val]].append(val)


    def pop(self):
        """
        :rtype: int
        """
        freq, m, maxf = self.freq, self.m, self.maxf
        val = m[maxf].pop()
        if not m[maxf]: self.maxf = maxf - 1
        freq[val] -= 1
        return val



# Your FreqStack object will be instantiated and called as such:
# obj = FreqStack()
# obj.push(val)
# param_2 = obj.pop()

