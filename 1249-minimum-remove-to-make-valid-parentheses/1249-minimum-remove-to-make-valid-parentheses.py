class Solution(object):
    def minRemoveToMakeValid(self, s):
        """
        :type s: str
        :rtype: str
        """
        """
        iterate through each character in string
        create a stack
        startIndex = 0
        end Index = 1
        every time an open parathensis encounter:
            add to stack
            endIndex += 1
        everytime a close parathensis appears
            check if the first thing in the stack is an ( then pop and stack nonempty
            check if first char in the string
                startIndex += 1
                
        """
        stack = []
        to_remove = set()
        for i, char in enumerate(s):
            if char == "(":
                stack.append(i)
            elif char == ")":
                if stack:
                    stack.pop()
                else:
                    to_remove.add(i)
         
        to_remove.update(stack)
        
        # build result string
        result = ""
        for i,char in enumerate(s):
            if i not in to_remove:
                result += char;
            
        return result