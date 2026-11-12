class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            map<char,bool>mprow;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                if(mprow[board[i][j]])return false;
                mprow[board[i][j]]=true;
            }
        }

        for(int j=0;j<9;j++)
        {
            map<char,bool>mprow;
            for(int i=0;i<9;i++)
            {
                if(board[i][j]=='.')continue;
                if(mprow[board[i][j]])return false;
                mprow[board[i][j]]=true;
            }
        }

        for(int sector=0;sector<9;sector++)
        {
            map<char,bool>mpSector;
            int startR=sector/3 *3;
            int startC=sector*3 %9;

            for(int row=startR;row<startR+3;row++)
            {
                for(int col=startC;col<startC+3;col++)
                {
                    if(board[row][col]=='.')continue;
                    if(mpSector[board[row][col]])return false;
                    mpSector[board[row][col]]=true;
                }
            }
        }

        return true;


    }
};
