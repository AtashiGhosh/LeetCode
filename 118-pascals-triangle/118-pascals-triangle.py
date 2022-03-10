class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        
        if numRows == 1:
            return [[1]]
        
        ans = [[1], [1,1]]
        prev_row = [1,1]
        
        for x in range(numRows-2):
            i = 0
            j = 1
            next_row = [1]
            while j <  len(prev_row):
                next_row.append(prev_row[i] + prev_row[j])
                i += 1
                j += 1
            next_row.append(1)
            ans.append(next_row)
            prev_row = next_row
        
        return ans
        