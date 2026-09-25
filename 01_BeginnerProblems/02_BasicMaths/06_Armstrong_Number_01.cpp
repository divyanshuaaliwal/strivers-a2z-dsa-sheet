// URL: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution {
  public:
  
    bool armstrongNumber01(int num) {
        
        int realNum = num;
        int armstrongNum = 0;
        
        while(num) {
            int lastDigit = num % 10;
            int digitCube = pow(lastDigit, 3);
            armstrongNum += digitCube;
            num /= 10;
        }
        
        return realNum == armstrongNum;
    }
};
