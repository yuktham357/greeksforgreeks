/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(!head) return nullptr;
        vector<int>ans;
        Node* curr=head;
        while(curr){
            ans.push_back(curr->data);
            curr=curr->next;
        }
        sort(ans.begin(),ans.end());
        int i=0;
        curr=head;
        while(curr){
            curr->data=ans[i++];
            curr=curr->next;
        }
        return head;
        
    }
};