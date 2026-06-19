class NumMatrix {
public:
    vector<vector<int>> matrix;
    NumMatrix(vector<vector<int>>& matrix) {
        this->matrix = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int m = matrix.size();
        int n = matrix[0].size();
        int sum = 0;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(i>=row1 && i<=row2 && j>=col1 && j<=col2){
                    sum+=matrix[i][j];
                }
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