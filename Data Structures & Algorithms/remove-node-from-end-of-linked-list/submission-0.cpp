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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> nodes;
        ListNode* ptr = head;
        ListNode* cur = head;
        ListNode* nlist = new ListNode(0);
        while(ptr){
            nodes.push_back(ptr);
            ptr = ptr->next;
        } 

        int k = nodes.size() - n;

        if(k == 0){
            return head->next;
        }
        else{
            for(int i = 0;i < nodes.size();i++){
                if(i == k){
                    nodes[i-1]->next = nodes[i]->next;
                }
            }

            return head;
        }
    }
};
