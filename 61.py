# Given 1->2->3->4->5->NULL and k = 2,
# return 4->5->1->2->3->NULL.

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def rotateRight(head: ListNode, k: int):
    if not head:
        return head

    # get the lenght
    length, tail = 1, head
    while tail.next:
        tail = tail.next
        length += 1

    if k == 0:
        return head

    cur = head
    for i in range(length - k - 1):
        cur = cur.next
    newHead = cur.next
    cur.next = None
    tail.next = head
    return newHead
