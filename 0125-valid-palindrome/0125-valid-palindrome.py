class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        result = ""
        for char in s:
            char = char.lower()
            if char.isalnum():
                result += char
        
        left = 0
        right = len(result)-1
        while left < right:
            if result[right] != result[left]:
                return False
            right -= 1
            left += 1
        return True