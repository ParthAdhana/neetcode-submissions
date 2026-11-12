class Solution {
public:
    int row[9] = {};
    int col[9] = {};
    int box[9] = {};


    bool isValidSudoku(vector<vector<char>>& board) {

        // Initialize masks and validate existing numbers
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') continue;

                int d = board[i][j] - '1';
                int bit = 1 << d;
                int b = (i / 3) * 3 + j / 3;

                if ((row[i] & bit) ||
                    (col[j] & bit) ||
                    (box[b] & bit))
                    return false;

                row[i] |= bit;
                col[j] |= bit;
                box[b] |= bit;
            }
        }
        return true;
        //return solve(board);
    }
};