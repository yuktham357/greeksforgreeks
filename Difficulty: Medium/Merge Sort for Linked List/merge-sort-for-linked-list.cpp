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
    Node* merge(Node* left,Node* right) {
        // code here
        if(!left) return right;
        if(!right) return left;
        Node* res=nullptr;
        if(left->data<=right->data){
            res=left;
            res->next=merge(left->next,right);
        }
        else{
            res=right;
            res->next=merge(left,right->next);
        }
        return res;
    }
    Node* getmiddle(Node* head){
        if(!head) return head;
        Node* slow=head;
        Node* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* mergeSort(Node* head){
        if(!head || !head->next) return head;
        Node* middle=getmiddle(head);
        Node* nextmiddle=middle->next;
        middle->next=nullptr;
        Node* left=mergeSort(head);
        Node* right=mergeSort(nextmiddle);
        return merge(left,right);
    }
    
};