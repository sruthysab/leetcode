class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        left = 0
        
        uniqueSet = set()
        maxLen = 0
        
        for right in range(len(s)):
            while(s[right] in uniqueSet):
                uniqueSet.remove(s[left])
                left += 1
            uniqueSet.add(s[right])
            maxLen = max(maxLen, right-left+1)
        return maxLen
        