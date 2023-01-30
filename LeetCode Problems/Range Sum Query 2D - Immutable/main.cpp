class NumMatrix {
public:
    vector<vector<int>> v;
    NumMatrix(vector<vector<int>>& mat) {
        v = mat;
        
        for(int i = 0; i < mat.size(); i++){
            int sum = 0;
            for(int j = 0; j < mat[0].size(); j++){
                sum += mat[i][j];
                v[i][j] = sum;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        if(col1 == 0){
            for(int i = row1; i <= row2; i++){
                sum += v[i][col2];
            }
            return sum;
        }
        else{
            for(int i = row1; i <= row2; i++){
                sum += v[i][col2] - v[i][col1-1];
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
