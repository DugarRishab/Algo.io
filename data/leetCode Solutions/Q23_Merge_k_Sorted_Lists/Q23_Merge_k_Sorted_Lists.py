# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        if not lists:
            return []
        
        if len(lists) == 1:
            return lists[0]
        
        mid = len(lists) // 2
        
        ll = lists[:mid]
        rl = lists[mid:]
        
        ll = self.mergeKLists(ll)
        rl = self.mergeKLists(rl)
        
        return self.merge(ll,rl)        
        
        
    def merge(self, l, r):
        root = ListNode(0)
        cur = root
        while l and r:
            if l.val < r.val:
                cur.next = l
                l = l.next
                
                cur = cur.next
            else:
                cur.next = r
                r = r.next
                
                cur = cur.next
                
        if l:
            cur.next = l
        else:
            cur.next = r
                
        return root.next
            
