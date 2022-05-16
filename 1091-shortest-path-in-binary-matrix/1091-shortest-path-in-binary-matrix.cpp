class Solution {
public:
    bool isValid(vector<vector<bool>>&vis,int x,int y,int row,int col){
        if(x<0||y<0||x>=row||y>=col)return false;
        if(vis[x][y])return false;
        return true;
    }
    int BFS(vector<vector<int>>&grid,int row, int col,vector<vector<bool>>&vis,vector<vector<int>>&dist)
    {
    int dRow[] = { -1, 0, 1, 0, 1, -1, -1, 1};
    int dCol[] = { 0, 1, 0, -1, 1, 1, -1, -1 };
    // Stores indices of the matrix cells
    queue<pair<int, int> > q;
    // Mark the starting cell as visited
    // and push it into the queue
    q.push(make_pair(row,col));
    dist[row][col]=1;
    vis[row][col] = true;
 
    // Iterate while the queue
    // is not empty
    while (!q.empty()) {
        pair<int, int> cell = q.front();
        int x = cell.first;
        int y = cell.second;
 
 
        q.pop();
        if(!grid[x][y]){
        // Go to the adjacent cells
        for (int i = 0; i < 8; i++) {
 
            int adjx = x + dRow[i];
            int adjy = y + dCol[i];
 
            if (isValid(vis, adjx, adjy,grid.size(),grid[0].size())||adjx==grid.size()-1&&adjy==grid[0].size()-1) {
                q.push({ adjx, adjy });
                if(!grid[adjx][adjy])dist[adjx][adjy]=min(dist[adjx][adjy],dist[x][y]+1);
                vis[adjx][adjy] = true;
            }
        }
    }
    }
        return dist[grid.size()-1][grid[0].size()-1];
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid.size()==1)return 1;
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        vector<vector<int>> dist(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        int res=BFS(grid,0,0,vis,dist);
        return res==INT_MAX?-1:res;
    }
};