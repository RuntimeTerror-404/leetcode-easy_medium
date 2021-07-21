# Input: 1->2->4, 1->3->4
# Output: 1->1->2->3->4->4

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next



def mergeLists(l1: ListNode, l2: ListNode):
    dummy = ListNode()
    tail = dummy

    while l1 and l2:
        if l1.val < l2.val:
            tail.next = l1.val
            l1 = l1.next
        else:
            tail.next = l2.val
            l2 = l2.next
        tail = tail.next

    if l1:
        tail.next = l1.val
    else:
        tail.next = l2.val

    return dummy.next

