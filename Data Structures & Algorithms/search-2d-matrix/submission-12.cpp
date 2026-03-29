class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int targetRow = rows - 1;
        for (int row = 1; row < rows; row++) {
            if (matrix[row][0] > target) {
                targetRow = row - 1;
                break;
            }
        }
        return binary_search(matrix[targetRow].begin(), matrix[targetRow].end(), target);
    }
};