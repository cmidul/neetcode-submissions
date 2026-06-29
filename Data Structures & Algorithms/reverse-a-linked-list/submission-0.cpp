/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* Node = head;
        ListNode* ptr = 0;

        while(Node){
            ListNode* temp = new ListNode;
            temp->val = Node->val;
            temp->next = ptr;
            ptr = temp;
            Node = Node->next;
        }

        return ptr;
    }
};
