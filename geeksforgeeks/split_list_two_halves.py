# User function Template for python3
'''
class Node:
    def __init__(self):
        self.data = None
        self.next = None
'''


class Solution:
    def splitList(self, head):
        # code here

        slow = head
        fast = head

        # finding mid using slow & fast approach
        while fast.next != head and fast.next.next != head:
            slow = slow.next
            fast = fast.next.next

        second_list = slow.next  # second list's head

        slow.next = head  # making first list circular

        current = second_list
        while current.next != head:
            current = current.next

        current.next = second_list  # making second list circular

        return head, second_list
