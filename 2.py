class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Input: (2 -> 4 -> 3) + (5 -> 6 -> 4 -> 3)
# Output: 7 -> 0 -> 8 -> 3


def addTwoNumbers(l1: ListNode, l2: ListNode):
    added = ListNode(val=(l1.val+l2.val) % 10)
    carry_over = (l1.val+l2.val)//10
    current_node = added

    while (l1 and l2):
        l1 = l1.next
        l2 = l2.next
        current_node.next = ListNode(val=carry_over + (l1.val+l2.val) % 10)
        carry_over = (carry_over + (l1.val+l2.val)//10)
        current_node = current_node.next

    while(l1):
        l1 = l1.next
        current_node.next = ListNode(val=(carry_over + l1.val) % 10)
        carry_over = (carry_over + l1.val)//10)
        current_node=current_node.next

    while(l2):
        l2=l2.next
        current_node.next=ListNode(val = (carry_over + l2.val) % 10)
        carry_over=(carry_over + l2.val) // 10)
        current_node=current_node.next
    if(carry_over):
        current_node.next=ListNode(val=1)

    return added
