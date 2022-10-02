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
    ListNode* swapPairs(ListNode* head) {
        //Solution using recursion
        
        if(head == NULL || head -> next == NULL) 
        {
            return head;
        }
        //Create a node such that it becomes the next of head
        ListNode* temp; 
        temp = head->next;
        head->next = swapPairs(head->next->next); 
        temp->next = head;
        
        return temp;
    }
};