class Solution:
    def isPalindrome(self, x: int) -> bool:
        for num1, num2 in zip(str(x)[::-1], str(x)):
            if num1 != num2:
                print(num1, num2)
                return False
        return True
