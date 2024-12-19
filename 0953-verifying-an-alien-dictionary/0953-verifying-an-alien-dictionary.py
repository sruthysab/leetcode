def compareWord(word1, word2, alphabet):
        len1 = len(word1)
        len2 = len(word2)
        for i in range(min(len1, len2)):
            if alphabet[word1[i]] > alphabet[word2[i]]:
                return False
            if alphabet[word1[i]] < alphabet[word2[i]]:
                return True
        return len1 <= len2 #if same return shorter word example 'apple' vs 'app'
        
class Solution(object):
    def isAlienSorted(self, words, order):
        """
        :type words: List[str]
        :type order: str
        :rtype: bool
        """
        """
        requirements:
        blank charachters are less than anything character 
        shorter words with same letters go in front of larger words
        
        will I have to deal with speciial characters?
        the order will always be 26 letters?
        
        get a ranking for each letter in the order
        compare if the next word has a ranking less than or equal
        check the lenghth as well
        
        hashmap: {char : number}
        
        """
        if(len(words) <= 1):
            return True
        
        alphabet = {char : i for i, char in enumerate(order)}

        
        for i in range(len(words)-1):
            if not compareWord(words[i], words[i+1], alphabet):
                return False
            
        return True

        