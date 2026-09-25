// URL: https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

class Solution {
  public:
    
    int bruteforce(int num1, int num2) {
        int mini = min(num1, num2);
        int gcd = 1;
        for(int i = 2 ; i <= mini ; i++) {
            if(num1 % i == 0 && num2 % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
    
    int better(int num1, int num2) {
        int mini = min(num1, num2);
        for(int i = mini ; i >= 1 ; i--) {
            if(num1 % i == 0 && num2 % i == 0) {
                return i;
            }
        }
    }
    
    int usingLoop(int num1, int num2) {
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
    
    int recursion(int num1, int num2) {
        
        if(num1 == 0) {
            return num2;
        }
        
        if(num2 == 0) {
            return num1 ;
        }
     
        if(num1 < num2) {
            return recursion(num1, num2 % num1);
        }
        else {
            return recursion(num2, num1 % num2);
        }
    }
  
    int gcd(int a, int b) {
        // return bruteforce(a, b);
        // return better(a, b);
        // return usingLoop(a, b);
        return recursion(a, b);
    }
};
