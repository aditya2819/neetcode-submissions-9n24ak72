class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 1;

        while (row < matrix.size()) {
            if (matrix[row][0] > target) {
                return binary_search(matrix[row - 1].begin(), matrix[row - 1].end(), target);
            }
            row++;
        }

        return binary_search(matrix[row - 1].begin(), matrix[row - 1].end(), target);
    }
};
