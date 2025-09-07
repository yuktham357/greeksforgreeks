/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        if(!head && !head->next) return 0;
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return countloop(slow);
        }
        return 0;
    }
 private:
    int countloop(Node* head){
        int count=1;
        Node* temp=head->next;
        while(temp!=head){
            count++;
            temp=temp->next;
        }
        return count;
    }
};