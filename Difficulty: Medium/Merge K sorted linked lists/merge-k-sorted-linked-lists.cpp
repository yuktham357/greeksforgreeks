/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        Node* ans=arr[0];
        for(int i=1;i<arr.size();i++){
            ans=mergetwo(ans,arr[i]);
        }
        return ans;
    }

 private:
    Node* mergetwo(Node* a,Node*b){
        if(!a) return b;
        if(!b) return a;
        Node* ans;
        if(a->data<b->data){
            ans=a;
            ans->next=mergetwo(a->next,b);
        }
        else{
            ans=b;
            ans->next=mergetwo(a,b->next);
        }
        return ans;
    }
};