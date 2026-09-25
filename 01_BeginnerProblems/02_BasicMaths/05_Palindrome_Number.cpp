// URL: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    
    bool isPalindrome(int num) {
        
        if(num < 0) {
            return false;
        }

        int realNumber = num;
        long reversedNumber = 0;

        while(num) {
            int lastDigit = num % 10;
            reversedNumber = reversedNumber * 10 + lastDigit;
            num /= 10 ;
        }

        return realNumber == reversedNumber;
    }
};
