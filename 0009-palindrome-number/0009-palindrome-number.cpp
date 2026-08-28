class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are never palindromes
        if (x < 0) return false;

        long original = x;
        long reversed_num = 0;
        long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed_num = reversed_num * 10 + digit;
            temp /= 10;
        }

        return original == reversed_num;
    }
};