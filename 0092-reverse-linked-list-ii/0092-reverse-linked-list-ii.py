# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseBetween(self, head, left, right):
        """
        :type head: Optional[ListNode]
        :type left: int
        :type right: int
        :rtype: Optional[ListNode]
        """
        index = 1
        curr = head
        prev = None
    
        while index < left:
            prev = curr
            curr = curr.next
            index += 1
        
        
        before_left = prev
        left_node = curr
        
        while index <= right:
            nextNode = curr.next;
            curr.next = prev
            prev = curr
            curr = nextNode
            index += 1
        
        if before_left:
            before_left.next = prev
        else:
            head = prev
        
        left_node.next = curr
        return head
        
        
     