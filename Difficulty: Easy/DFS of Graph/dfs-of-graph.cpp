class Solution {
    
  private:
    void dfsofvector(int node,vector<vector<int>>& adj,int vis[],vector<int>&ls){
        vis[node]=1;
        ls.push_back(node);
        for(int i:adj[node]){
            if(!vis[i]){
                dfsofvector(i,adj,vis,ls);
            }
        }
    }
        
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        int vis[n]={0};
        int start=0;
        vector<int>ls;
        dfsofvector(start,adj,vis,ls);
        return ls;
    }
};