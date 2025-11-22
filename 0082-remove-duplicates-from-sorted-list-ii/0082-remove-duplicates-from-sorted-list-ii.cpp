class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;

        unordered_map<int,int> mp;

        // 1️⃣ Count frequency
        ListNode* temp = head;
        while (temp) {
            mp[temp->val]++;
            temp = temp->next;
        }

        // 2️⃣ Skip duplicates from starting (fix head)
        while (head && mp[head->val] > 1) {
            head = head->next;
        }
        if (!head) return NULL;

        // 3️⃣ Remove duplicates in middle
        ListNode* prev = head;
        temp = head->next;

        while (temp) {
            if (mp[temp->val] > 1) {
                // Skip all duplicates
                temp = temp->next;
                prev->next = temp;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};
