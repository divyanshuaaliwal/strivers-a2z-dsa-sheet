// URL: https://www.geeksforgeeks.org/problems/lcm-of-two-numbers/1

class Solution {
  public:
    
    int bruteforce(int num1, int num2) {
        
        if(num1 == 0 || num2 == 0) {
            return 0;
        }
        
        int number = max(num1, num2);
        while(number) {
            if(number % num1 == 0 && number % num2 == 0) {
                return number;
            }
            number += 1;
        }
    }

    int getGCD(int num1, int num2) {
        while(num1 && num2) {
            if(num1 < num2) {
                num2 = num2 % num1;
            }
            else {
                num1 = num1 % num2;
            }
        }
        return num1 ? num1 : num2 ;
    }

    int optimal(int num1, int num2) {
        
        if (num1 == 0 || num2 == 0) {
            return 0;
        }
        
        int lcm = (num1 * num2) / getGCD(num1, num2);
        return lcm;
    
    }

    int lcm(int a, int b) {
        // return bruteforce(a, b);
        return optimal(a, b);
    }  
};
