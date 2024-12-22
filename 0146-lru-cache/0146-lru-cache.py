class Node():
    def __init__(self, key, val):
        self.key = key
        self.val = val
        self.prev = None # pointer to previous node
        self.next = None # pointer to next node
        

class LRUCache(object):

    def __init__(self, capacity):
        """
        :type capacity: int
        """
        self.capacity = capacity
        self.cache = {}
        
        self.head = Node(-1,-1)
        self.tail = Node(-1,-1)
        
        self.head.next = self.tail
        self.tail.prev = self.head
        
    def addNode(self, node):
        node.prev = self.head
        node.next = self.head.next
        self.head.next.prev = node
        self.head.next = node
  
    def removeNode(self, node):
        # if the node trying to remove is Null then don't bother
        if node is None: #or node.key not in self.cache
            return
        
        #set the previous connection right of the node
        if node.prev is not None:
            node.prev.next = node.next
        
        #set the next connection right of the node
        if node.next is not None:
            node.next.prev = node.prev
        
        # sever connctions from the current node
        node.next = None
        node.prev = None
        
    def moveToFront(self, node):
        self.removeNode(node)
        self.addNode(node)

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        if key in self.cache:
            node = self.cache[key]
            self.moveToFront(node)
            return node.val
        else:
            return -1
        

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
 
        if key in self.cache:
            node = self.cache[key]
            node.val = value
            self.moveToFront(node)
        else:
            if len(self.cache) >= self.capacity:
                lruNode = self.tail.prev
                if lruNode:
                    self.removeNode(lruNode) # remove the last node is the least recently used
                    if lruNode.key in self.cache:
                        del self.cache[lruNode.key]  #delete entry in hashmap
            newNode = Node(key, value)
            self.cache[key] = newNode
            self.addNode(newNode)


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)