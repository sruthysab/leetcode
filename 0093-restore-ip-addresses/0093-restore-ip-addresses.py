class Solution(object):
    def restoreIpAddresses(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        def isValid(segment):
            if len(segment) > 1 and segment[0] == '0':
                return False
            if 0 <= int(segment) <= 255:
                return True
            
        def backtracking(start, path): #path is a list
            if len(path) == 4:
                if start == len(s):
                    result.append('.'.join(path))
            for length in range(1,4):
                if start + length <= len(s):
                    segment = s[start: start + length] # create each substring
                    if isValid(segment):
                        backtracking(start + length, path + [segment])
            
        if len(s) < 4 or len(s) > 12:
            return []
        
        result = []
        backtracking(0, [])
        return result
        