class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        vec.assign(matrix.size() ,vector<int>(matrix[0].size()+1, 0));
        
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
                vec[i][j+1] = vec[i][j] + matrix[i][j];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = 0;
        
        for (int i = row1; i <= row2; i++)
            res += vec[i][col2+1] - vec[i][col1];
        
        return res;
    }
    
private:
    vector<vector<int>> vec;
};
