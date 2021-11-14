/*
@Author : Onkar Birajdar
Date : 27/10/2021
Description : Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
Prob. Link: https://leetcode.com/problems/middle-of-the-linked-list/
*/

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
