class Solution {
public:
     vector<vector<int>>adj;
    int vis[101];
    
    int dfs(int node, int color){
        if(vis[node]!=-1){
            if(vis[node]==(1^color))return 1;
            else return 0;
        }
        vis[node]=color;
        for(auto x:adj[node]){
            if(dfs(x,color^1))return 1;
        }
        return 0;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        this->adj=graph;
        memset(vis,-1,sizeof vis);
        for(int i=0;i<graph.size();i++){
            if(vis[i]!=-1)continue;
            if(dfs(i,0))return 0;    
        }
        return 1;
    }
};