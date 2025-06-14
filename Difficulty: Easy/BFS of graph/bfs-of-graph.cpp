class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n=adj.size();
        int vis[n]={0};
        vis[0]=1;
        queue<int>q;
        vector<int>bfs;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            bfs.push_back(node);
            q.pop();
            for(int i:adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return bfs;
        
    }
};