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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* temp = head;
        ListNode* right = head;
        int cnt = 1,total =0;
        while(temp->next != nullptr){
            total++;
            temp = temp->next;
        }
        while(cnt != k){
            cnt++;
            left = left->next;
        }
        cnt = 0;
        while(cnt != (total-k+1)){
            cnt++;
            right = right->next;
        }
        int tempval = left->val;
        left->val = right->val;
        right->val = tempval;
        
        return head;
    }
};