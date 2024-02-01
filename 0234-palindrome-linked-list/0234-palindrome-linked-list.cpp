/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        bool isPalindrome(ListNode *head)
        {
            if (head == nullptr || head->next == nullptr)
            {
                return true;
            }
            int length = 0;
            ListNode *current = head;
            while (current != nullptr)
            {
                length++;
                current = current->next;
            }

            stack<int> stack;
            current = head;
            for (int i = 0; i < length / 2; i++)
            {
                stack.push(current->val);
                current = current->next;
            }
            if (length % 2 != 0)
            {
                current = current->next;
            }
            while (current != nullptr)
            {
                if (current->val != stack.top())
                {
                    return false;
                }
                stack.pop();
                current = current->next;
            }

            return true;
        }
};