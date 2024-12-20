class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        if num1 == "0" or num2 == "0":
            return "0"
        
        #check for negative
        isNeg = False
        if(num1[0] == '-' or num2[0] == '-'):
            isNeg = True
            
        charToDigit = {
            '0':0, '1':1, '2':2, '3':3, '4':4,
            '5':5, '6':6, '7':7, '8':8, '9':9
        }
        digit_to_char = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
        
        def convertToInt(num1):
            result = 0
            for char in num1:
                digit = charToDigit[char]
                result = result * 10 + digit
            return result
        
        def convertToStr(num1):
            result = []
            while num1 > 0:
                digit = num1 % 10
                result.append(digit_to_char[digit])
                num1 = num1//10
            return result[::-1] #reverse to get correct string
        
        numC1 = convertToInt(num1)
        numC2 = convertToInt(num2)
        
        result = 0;
        for i, char in enumerate(reversed(num2)):
            result += numC1 * charToDigit[char] * (10 ** i)
        
        resultStr = convertToStr(result)
        if(isNeg):
            return '-'+ "".join(resultStr)
        
        return "".join(resultStr)
        