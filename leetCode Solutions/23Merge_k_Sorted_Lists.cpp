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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if ( lists.size() == 0)return NULL; // If list size is zero then return the NULL 
        priority_queue< int , vector<int > , greater<int>>pq ;// intialising the MAX HEAP 
        for ( int i = 0 ;  i < lists.size() ; ++i)
        {
            ListNode*head = lists[i]; // taking each starting node of each linked list in the vector 
            while (head!= NULL) // Move that head to the last until the NULL
            {
                pq.push(head->val);// pushing into the pq which lead the smallest on the top automatically in heap 
                head = head -> next ; // shifting the head ;
            }
        }
        // at this point all linked list node value is in the heap in increasin order :)
        ListNode*start = NULL ; // Intialising the starting and ending point of the new list 
        ListNode*end = NULL ; // same here end point is intailsing here at starting they are at the starting 
        while (pq.size()!= 0 ) // pop until hap is empty 
        {
            if ( start == NULL) // if starting point is null linked it with first 
            {
                 start = new ListNode(pq.top());
                 end = start; // then take the end point from null to the first position from this continue joining the lsit :)
                pq.pop();
            }
            else
            {
                end -> next =  new ListNode(pq.top());
                end = end -> next ;// here actulaly what i am doing extending the list by incresing the end pointer of the new list :)
                pq.pop(); // poping each value of heap ;
            }
        }
        return start ; // returning the starting of the list :)
        
    }
};