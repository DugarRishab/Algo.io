/*
This algo uses the curr pointer to loop over the linkedlist and store its total length in a variable. 
If the node required to remove resides at the end of the list, its removed and returned. 
Else, the curr pointer loops over the list again for the (length-requiredNodeNumberfromLast) to remove the desired Node
*/


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* curr = head;
        while(curr){
            length++;
            curr=curr->next;
        }
        if(length == n) return head->next;
        curr = head;
        for(int i = 1; i < length-n; i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
        
    }
};