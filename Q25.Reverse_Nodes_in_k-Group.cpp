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
    ListNode* reverseKGroup(ListNode* head, int k) {

        //if the list is empty
        //or the size of the groups formed is 1 
        //the list remain as it is
        if(head == NULL || k == 1) return head;

        //keeping a temporary pointer 
        //pointing to the head of the list 
        ListNode *temp = new ListNode(0);
        temp->next = head;

        //maintaining the pointers
        ListNode *cur = temp, *nex = temp, *pre = temp;
        int count = 0;

        //find the lenght 
        while(cur->next != nullptr){
            cur = cur->next;
            count++;
        }

        //making the k size groups and iterating them
        while(count >= k){

            cur = pre->next;
            nex = cur->next;

            for(int i = 1; i < k; i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            
            pre = cur;
            count -= k;
        }

        //returning the head of the list
        return temp->next;
    }
};