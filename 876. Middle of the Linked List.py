# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        lst=[]
        while head:
            lst.append(head.val)
            head=head.next
        a=ListNode(0)
        tmp=a
        for i in lst[int(len(lst)/2):]:
            tmp.next=ListNode(i)
            tmp=tmp.next
        return a.next
