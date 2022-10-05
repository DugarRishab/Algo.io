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
        // if the head is itself NULL then the linked list doesnt exist
        // if the next of head is null then it contains only one node 
        if(head == NULL || head->next == NULL){return head;}
        // in both above senario we have to return our head only


        // in this step we first create a dummy node with head->next's data
        ListNode* temp = head->next;

        //we recursively call the function for next node and it will call further one
        head->next = swapPairs(head->next->next);
        // we connect our temp node's next to head in order to swap it
        temp->next = head;
        //finally we return the list
        return temp;
    }
};