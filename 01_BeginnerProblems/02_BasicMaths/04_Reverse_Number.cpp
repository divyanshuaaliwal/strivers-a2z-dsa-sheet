// URL: https://leetcode.com/problems/reverse-integer/

class Solution {
public:

    int reverse(int num) {
        
        long reversedNumber = 0 ;

        while(num) {
            int lastDigit = num % 10;
            reversedNumber = reversedNumber * 10 + lastDigit;
            num /= 10 ;
        }

        return (reversedNumber > INT_MAX || reversedNumber < INT_MIN ) ? 0 : reversedNumber;
    }
};
