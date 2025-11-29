/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
       Node* temp=head;
       while(temp!=NULL){
        if(temp!=NULL&&temp->child!=NULL){
            Node* gochild=temp->child;
             Node* goneext=temp->next;
                      
            temp->next=gochild;
            gochild->prev=temp;
            temp->child=NULL;
            while(gochild->next!=NULL){
                gochild=gochild->next;
            }
            if(goneext!=NULL)
            goneext->prev=gochild;
            gochild->next=goneext;
        }
        temp=temp->next;

        }
       return head; 
    }
};