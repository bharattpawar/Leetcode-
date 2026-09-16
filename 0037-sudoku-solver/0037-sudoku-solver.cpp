class Solution {
public:

    bool check(int c, int row, int col, vector<vector<char>>& board) {

        char f = '0' + c;

        // Check row
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == f)
                return false;
        }

        // Check column
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == f)
                return false;
        }

        // Find starting point of 3x3 box
        row = (row / 3) * 3;
        col = (col / 3) * 3;

        // Check 3x3 box
        for (int a = row; a < row + 3; a++) {
            for (int b = col; b < col + 3; b++) {
                if (board[a][b] == f)
                    return false;
            }
        }

        return true;
    }

    bool find(int row, int col, vector<vector<char>>& board) {

        // Sudoku completely solved
        if (row == 9)
            return true;

        // Move to next row
        if (col == 9) {
            return find(row + 1, 0, board);
        }

        // Already filled cell
        if (board[row][col] != '.')
            return find(row, col + 1, board);

        // Try numbers 1 to 9
        for (int i = 1; i <= 9; i++) {

            if (check(i, row, col, board)) {

                // Place number
                board[row][col] = '0' + i;

                // Recursively solve
                if (find(row, col + 1, board))
                    return true;

                // Backtrack
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        find(0, 0, board);
    }
};