class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto& i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detect(i,adj,vis)) return true;
            }
        }
        
       return false;
    }
  private:
    bool detect(int src,vector<vector<int>>& adj,vector<int>& vis){
        vis[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(int i:adj[node]){
                if(!vis[i])
                {
                    vis[i]=1;
                    q.push({i,node});
                }
                else if(parent!=i){
                    return true;
                }
            }
        }
        return false;
        
    }
    
};