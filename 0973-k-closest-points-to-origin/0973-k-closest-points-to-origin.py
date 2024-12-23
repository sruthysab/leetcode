import heapq
import cmath

class Solution(object):
    def kClosest(self, points, k):
        """
        :type points: List[List[int]]
        :type k: int
        :rtype: List[List[int]]
        """
        
        minHeap = []
        for point in points:
            dis = (point[0] - 0) ** 2 + (point[1] - 0) ** 2 # take the real part to avoid complex numbers
            heapq.heappush(minHeap, (dis, point))
        
        # initialize max heap with first k elements
        result = []
        for _ in range(k):
            result.append(heapq.heappop(minHeap)[1])
        return result
        