class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = m - 1;
        for (int i = 1; i < m; i++) {
            if (matrix[i][0] == target) return true;
            if (matrix[i-1][0] == target) return true;

            if (matrix[i-1][0] < target && target < matrix[i][0]) {
                row = i - 1;
                break;
            }
            if (target < matrix[i][0]) {
                row = i - 1;
                break;
            }
        }

        return binary_search(matrix[row].begin(), matrix[row].end(), target);
    }
};