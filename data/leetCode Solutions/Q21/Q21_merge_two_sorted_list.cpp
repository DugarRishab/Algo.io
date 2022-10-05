// LeetCode Problem Number-21
// Merge Two Sorted Lists
// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.

class Solution {
public:
    void insert(ListNode* head, ListNode* toAdd) {
        head->next = new ListNode(toAdd->val);
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* ptr = ans;
        
        while(list1 && list2) {
            if(list1->val <= list2->val) {
                insert(ptr, list1);
                list1 = list1->next;
            }
            else {
                insert(ptr, list2);
                list2 = list2->next;
            }
            ptr = ptr->next;
        }
        while(list1) {
            this->insert(ptr, list1);
            list1 = list1->next;
            ptr = ptr->next;
        }
        while(list2) {
            this->insert(ptr, list2);
             list2 = list2->next;
            ptr = ptr->next;
        }
        
        return ans->next;
    }
};