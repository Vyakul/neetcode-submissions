class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int value = x;
        int s = 0;

        while (x > 0) {
            s = s * 10 + (x % 10);
            x /= 10;
        }

        return s == value;
    }
};