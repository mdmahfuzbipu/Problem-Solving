# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        last_node = head
        mid_node = head

        while last_node and last_node.next:
            mid_node = mid_node.next
            last_node = last_node.next.next

        return mid_node
