class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> live;
	vector<int> die;
	int alive(0);
	for(int i=0;i<board.size();i++)
		for (int j = 0; j < board[i].size(); j++) {
			alive = 0;
			if (j + 1 < board[i].size()) { 
				if (board[i][j + 1])alive++;
				if(i+1< board.size())
					if(board[i+1][j + 1])alive++;
				if (i != 0)
					if (board[i - 1][j + 1])alive++;
			}
			if(i!=0)
				if (board[i - 1][j])alive++;
			if (i + 1 < board.size())
				if (board[i + 1][j])alive++;
			if (j != 0) {
				if (board[i][j - 1])alive++;
				if (i != 0)
					if (board[i - 1][j - 1])alive++;
				if (i + 1 < board.size())
					if (board[i + 1][j - 1])alive++;
			}

			if (board[i][j]==1&&alive < 2 || board[i][j] == 1&&alive>3) { die.push_back(i); die.push_back(j); continue; }
			else if (board[i][j]==0 && alive == 3) { live.push_back(i); live.push_back(j); }
		}

	for (int i = 1; i <= die.size(); i+=2) {
		board[die[i-1]][die[i]] = 0;
	}
	for (int i = 1; i <= live.size(); i += 2) {
		board[live[i-1]][live[i]] = 1;
	}
    }
};