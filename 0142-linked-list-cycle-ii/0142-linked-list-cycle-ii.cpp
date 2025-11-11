/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>check;int pos=0;
        ListNode* temp=head;
        while(temp!=NULL){
            if(check.find(temp)!=check.end()){
                return temp;
            }

            check.insert({temp,pos});
temp=temp->next;
pos++;
        }return temp;
    }
};