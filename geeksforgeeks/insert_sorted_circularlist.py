'''
class Node: 
    # Constructor to initialize the node object 
    def __init__(self, data): 
        self.data = data 
        self.next = None
  '''


class Solution:
    def sortedInsert(self, head, data):

        new_node = Node(data)

        if not head:  # if zero node in the list
            head = new_node
            new_node.next = new_node

        elif data < head.data:  # if node value less than head
            new_node.next = head
            temp = head

            while temp.next != head:
                temp = temp.next

            temp.next = new_node
            head = new_node

        else:  # to add in the middle or in the end

            temp = head

            while temp.next != head and temp.next.data < data:
                temp = temp.next

            new_node.next = temp.next
            temp.next = new_node

        return head
