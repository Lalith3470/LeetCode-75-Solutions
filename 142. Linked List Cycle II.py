# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        tmp,node=head,head
        while node and node.next:
            tmp=tmp.next
            node=node.next.next
            if tmp==node:
                break
        else:return None
        ptr=head
        while ptr!=node:
            ptr=ptr.next
            node=node.next
        return ptr
