# read the linked list and add the element of the last element in linked list and if carry generated pass it to other element
# l1 = [2, 4, 3]
# l2 = [5, 6, 4]
Head = ListNode(0)
current = Head
carry = 0
while l1 != None or l2 != None or carry != 0:
    l1Val = l1.val if l1 else 0
    l2Val = l2.val if l2 else 0
    print(f"{l1Val} + {l2Val}")
    columnSum = l1Val + l2Val + carry
    carry = columnSum // 10
    newNode = ListNode(columnSum % 10)
    current.next = newNode
    current = newNode
    l1 = l1.next if l1 else None
    l2 = l2.next if l2 else None
print(Head.next)
