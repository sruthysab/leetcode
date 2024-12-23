class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        """
        right = [1] * len(nums)
        left = [1] * len(nums)
        result = [1] * len(nums)
        
        for i in range(1, len(nums)):
            left[i] = left[i-1] * nums[i-1]
        
        for i in range(len(nums)-2, -1, -1):
            right[i] = right[i+1] * nums[i+1]
        
        
        for i in  range(len(nums)):
            result[i] = left[i] * right[i]
        
        return result
        """
        
        # CONSTANT SPACE
        right = 1
        left = 1
        
        result = [1] * len(nums)
        
        for i in range(len(nums)):
            result[i] = left
            left *= nums[i]
        
        for i in range(len(nums)-1, -1, -1):
            result[i] *= right
            right *= nums[i]
            
        return result
        
       
            