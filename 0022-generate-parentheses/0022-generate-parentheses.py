result = "";


class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        result = []
        def backtrack(openN, closeN, curr):
            if openN == n and closeN == n:
                result.append(curr);
    
            if openN < n:
                backtrack(openN + 1, closeN, curr + '(');
    
            if openN > closeN:
                backtrack(openN, closeN + 1, curr + ')');
        
        backtrack(0, 0, "")
        return result
        