// Problem: Delete Node in a Linked List
// Link: https://leetcode.com/problems/delete-node-in-a-linked-list/

// Solution:

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
        ListNode *cur = node;
        node=node->next;
        while(node->next!=NULL){
            cur->val=node->val;
            cur=cur->next;
            node=node->next;
        }
        cur->val = node->val;
        cur->next = NULL;
    }
};
