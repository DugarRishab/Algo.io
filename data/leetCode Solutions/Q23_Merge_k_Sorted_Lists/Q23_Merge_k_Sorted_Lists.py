class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        
        if not lists:
            return None
        
        vals = []
        
        for i in lists:
            j = i
            while j is not None:
                vals.append(j.val)
                j = j.next
                
        ret = None
        if vals:
            
            vals = sorted(vals)

            head = ListNode(vals[0])
            ret = head

            for i in range(1, len(vals)):
                head.next = ListNode(vals[i])
                head = head.next

        return ret
