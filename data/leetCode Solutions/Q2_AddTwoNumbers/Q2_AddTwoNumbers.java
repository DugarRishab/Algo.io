/*
public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
  */
public class Q2_AddTwoNumbers {

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        ListNode dummy = new ListNode(-1);

        ListNode curr = dummy;
        int cy = 0;

        while(l1 != null || l2 != null || cy == 1){
            int sum = 0;
            if(l1 != null){
                sum += l1.val;
                l1 = l1.next;
            }
            if(l2 != null){
                sum += l2.val;
                l2 = l2.next;
            }

            sum += cy;
            cy = sum/10;
            ListNode node = new ListNode(sum % 10);
            curr.next = node;
            curr = curr.next;
        }

        return dummy.next;
    }
}
