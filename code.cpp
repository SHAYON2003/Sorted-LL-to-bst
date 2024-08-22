#include<iostream>
using namespace std;


Node* sortedLLToBST(Node* head){
       if(!head ) return NULL;

       if(!head->next) return new Node(root->val);

       Node* slow = head;
       Node* fast = head;
       Node* slowPrev = NULL;

       while(fast != NULL && fast->next != NULL){
           slow = slow->next;
           fast = fast->next->next;
       }
   
      Node* root = new Node(slow->data);

       slowPrev->next = NULL;

       node->left = sortedLLToBST(head);
       node->right = sortedLLToBST(slow->next);

       return node;


}