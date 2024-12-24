from collections import deque

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def minimumOperations(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        def countSwaps(nums):
            ops = 0
            indexMap = {num:i for i, num in enumerate(nums)}
            sortedNums = sorted(nums)
            
            for i in range(len(nums)):
                if nums[i] != sortedNums[i]:
                    ops += 1
                    j = indexMap[sortedNums[i]]
                    nums[i], nums[j] = nums[j], nums[i]
                    indexMap[nums[j]] = j
            return ops
        
        if not root:
            return 0
        
        res = 0
        q = deque([root])
        while q:
            level = []
            size = len(q)
            for _ in range(size):
                node = q.popleft()
                level.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            res += countSwaps(level)
        return res