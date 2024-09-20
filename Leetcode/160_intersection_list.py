# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        list1 = headA
        list2 = headB

        while list1 != list2:
            if list1:
                list1 = list1.next
            else:
                list1 = headB

            if list2:
                list2 = list2.next
            else:
                list2 = headA

        return list1
