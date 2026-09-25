// URL: https://takeuforward.org/practice/dsa/return-the-largest-digit-in-a-number

class Solution {
public:

    int optimal(int num) {
        int largestDigit = 0;
        while(num) {
            int digit = num % 10;
            largestDigit = max(largestDigit, digit);
            num /= 10;
        }
        return largestDigit;
    }

    int largestDigit(int n) {
        return optimal(n);
    }

};