/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isSymmetric(Node* root) {
        // Code here
        if(root==NULL){
            return true;
        }
        return check(root->left,root->right);
    }
  private:
    bool check(Node* head1,Node* head2){
        if(head1==NULL && head2==NULL){
            return true;
        }
        if(head1==NULL || head2==NULL || head1->data!=head2->data){
            return false;
        }
        bool left=check(head1->left,head2->right);
        bool right=check(head1->right,head2->left);
        return left && right;
    }
};