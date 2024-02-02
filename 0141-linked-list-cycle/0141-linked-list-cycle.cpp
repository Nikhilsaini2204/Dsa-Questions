/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        bool hasCycle(ListNode *head)
        {
            unordered_set<ListNode*> hashset;
            while (head != NULL)
            {
                if (hashset.find(head) != hashset.end())
                    return true;
                hashset.insert(head);
                head = head->next;
            }
            return false;
        }
};