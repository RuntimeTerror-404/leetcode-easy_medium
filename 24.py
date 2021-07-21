# 1->2->3->4, you should return the list as 2->1->4->3

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def swapNodes(head: ListNode):
    l1 = head

    while l1.next is not None:
        l1 = l1.next
        l1.next = l1
        l1 == l1.next.next

    return l1.next
