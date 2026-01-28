class NumMatrix {
private:
    vector<vector<int>> ps;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> temp(m + 1, vector<int>(n + 1, 0));
        for (int r = 1; r <= m; r++) {
            for (int c = 1; c <= n; c++) {
                temp[r][c] = matrix[r - 1][c - 1] + temp[r - 1][c] + temp[r][c - 1] - temp[r - 1][c - 1];
            }
        }
        swap(temp, ps);
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return ps[row2 + 1][col2 + 1] - ps[row2 + 1][col1] - ps[row1][col2 + 1] + ps[row1][col1];
    }
};