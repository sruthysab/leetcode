class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        count = 0
        prefix_sum = 0
        hash_map = {0: 1}  # Initialize with 0:1 for subarrays starting from the beginning when first element same as k

        for num in nums:
            prefix_sum += num

            # Check if prefix_sum - k exists in the hash_map
            if prefix_sum - k in hash_map:
                count += hash_map[prefix_sum - k]

            # Update the hash_map with the current prefix_sum so that we don't need to check via manula iteration if that prefix exists
            hash_map[prefix_sum] = hash_map.get(prefix_sum, 0) + 1 #with get method checks if it returns a value otherwise returns 0

        return count
        
        