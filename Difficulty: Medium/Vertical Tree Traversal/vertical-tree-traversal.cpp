/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // Your code here
        if (!root) return {};
        
        map<int, vector<int>> mp;             
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto [node, col] = q.front(); q.pop();
            mp[col].push_back(node->data);
            
            if (node->left)  q.push({node->left, col-1});
            if (node->right) q.push({node->right, col+1});
        }
        
        vector<vector<int>> ans;
        for (auto &p : mp) ans.push_back(p.second);
        return ans;
    }
};
