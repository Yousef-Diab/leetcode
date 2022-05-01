class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][10]={0};
        int col[9][10]={0};
        int box[10][10]={0};
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                if(++row[i][board[i][j]-'0']>1)return false;
                if(++col[j][board[i][j]-'0']>1)return false;
                if(++box[(j/3 +1)+(3*(i/3))][board[i][j]-'0']>1)return false;
                }
            }
        return true;
    }
};