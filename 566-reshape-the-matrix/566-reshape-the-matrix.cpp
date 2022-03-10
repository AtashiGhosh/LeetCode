class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int numOfRowsOfMat = mat.size();
        int numOfColumnsOfMat = mat[0].size();
        int row=0, column= 0;
        
        if(numOfRowsOfMat*numOfColumnsOfMat != r*c)
            return mat;
        
        vector<vector<int>> newMatrix(r, vector<int>(c));
        for(int i=0; i<numOfRowsOfMat; i++)
        {
            for(int j=0; j<numOfColumnsOfMat; j++)
            {
                newMatrix[row][column] = mat[i][j];
                column++;
                if(column == c)
                {
                    column = 0;
                    row++;
                }
            }
        }
       return newMatrix;
    }
        
    
};