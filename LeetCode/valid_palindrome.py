class Solution:
    def isPalindrome(self, s: str) -> bool:

        str = []
        for char in s:
            if char.isalnum():
                str.append(char.lower())

        while len(str)>1:
            if str.pop()!=str.pop(0):
                return False

        return True

