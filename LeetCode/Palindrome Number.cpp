class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }

        int reverse_number = 0;
        int tmp = x;
        while (tmp != 0){
            int digit = tmp % 10;
            reverse_number = reverse_number * 10 + digit;
            tmp /= 10;
        }

        return reverse_number == x;
    }
};
