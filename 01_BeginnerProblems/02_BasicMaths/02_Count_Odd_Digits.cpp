// URL: https://takeuforward.org/practice/dsa/count-number-of-odd-digits-in-a-number

class Solution {
public:

    int optimal(int num) {
        int count = 0;
        while(num) {
            int digit = num % 10;
            count += (digit & 1);
            num /= 10;
        }
        return count;
    }

    int countOddDigit(int n) {
        return optimal(n);
    }
};