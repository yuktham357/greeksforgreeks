class Solution {
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int island=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L' && !vis[i][j]){
                    island++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return island;
    }
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<bool>>&vis){
        vis[i][j]=true;
        vector<int> dr = {-1, -1, -1, 0, 0, 1, 1, 1};
        vector<int> dc = {-1, 0, 1, -1, 1, -1, 0, 1};
        for(int k=0;k<8;k++){
            int r=i+dr[k];
            int c=j+dc[k];
            if(issafe(grid,r,c,vis)){
                dfs(r,c,grid,vis);
            }
        }
    }
    bool issafe(vector<vector<char>>& grid,int r,int c,vector<vector<bool>>&vis){
        int n=grid.size();
        int m=grid[0].size();
        return (r>=0 && r<n && c>=0 && c<m && grid[r][c]=='L' && !vis[r][c]);
    }
};