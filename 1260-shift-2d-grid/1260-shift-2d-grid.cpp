class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       queue<int> q;
	for(int i=grid.size()-1;i>=0;i--)
		for (int j = grid[i].size() - 1; j >= 0; j--) {
			q.push(grid[i][j]);
		}
	for (int i = 0; i < k; i++) {
		int temp = q.front();
		q.pop();
		q.push(temp);
	}
	for (int i = grid.size() - 1; i >= 0; i--) {
		for (int j = grid[i].size() - 1; j >= 0; j--) {
			grid[i][j] = q.front();
			q.pop();
		}
	}
	return grid; 
    }
};