# Given linked list: 1->2->3->4->5, and n = 2.
# After removing the second node from the end, the linked list becomes 1->2->3->5.

class Node:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next


def removeNth(head: ListNode, n: int):
    slow = fast = head

    for i in range(n):
        fast = fast.next

    if fast is None:
        return head.next

    while fast.next:
        fast = fast.next
        slow = slow.next
    slow.next = slow.next.next
    return head
