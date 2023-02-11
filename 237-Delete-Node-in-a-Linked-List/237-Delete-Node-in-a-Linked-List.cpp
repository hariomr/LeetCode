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
    void deleteNode(ListNode* node) {
        ListNode* nex = node->next;
        ListNode* nnex = nex->next;

        swap(node->val,nex->val);
        node->next = nnex;
        delete nex;
    }
};
