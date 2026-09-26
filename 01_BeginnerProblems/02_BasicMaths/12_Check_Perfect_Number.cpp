// URL: https://leetcode.com/problems/perfect-number/

class Solution {
public:

    bool bruteForce(int num) {
        int sumOfAllFactors = 0;
        for(int i = 1 ; i < num ; i++) {
            if(num % i == 0) {
                sumOfAllFactors += i;
            }
        }
        return sumOfAllFactors == num;
    }

    bool optimal(int num) {
        int sumOfAllFactors = 0;
        int sqrtNum = sqrt(num);
        for(int i = 1 ; i <= sqrtNum ; i++) {
            if(num % i == 0) {
                sumOfAllFactors += i;
                if(i != (num / i)) {
                    sumOfAllFactors += (num / i);
                }
            }
        }
        return sumOfAllFactors == (num * 2);     
    }

    bool checkPerfectNumber(int num) {
        // return bruteForce(num);      
        return optimal(num);
    }
};
