class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         int a1[9][9] = {0}, a2[9][9] = {0}, a3[9][9] = {0};
        
        for(int i = 0; i < board.size(); ++ i)
            for(int j = 0; j < board[i].size(); ++ j)
                if(board[i][j] != '.')
                {
                    int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(a1[i][num] || a2[j][num] || a3[k][num])
                        return false;
                    a1[i][num] = a2[j][num] = a3[k][num] = 1;
                }
        
        return true;
        
    }
};