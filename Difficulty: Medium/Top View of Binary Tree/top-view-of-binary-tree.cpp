/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // cod9e here
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        vector<int>ans;
        while(!q.empty()){
            Node* temp=q.front().first;
            int lev=q.front().second;
            q.pop();
            if(temp){
                if(!mp.count(lev)){
                    mp[lev]=temp->data;
                }
                if(temp->left){
                    q.push({temp->left,lev-1});
                }
                if(temp->right){
                    q.push({temp->right,lev+1});
                }
            }
            else{
                q.push({NULL,0});
                if(!q.front().first) break;
            }
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};