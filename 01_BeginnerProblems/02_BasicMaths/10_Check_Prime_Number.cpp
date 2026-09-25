// URL: https://www.geeksforgeeks.org/problems/prime-number2314/1

class Solution {
  public:

    int bruteForce(int num) {
        int totalFactors = 0;
        for(int i = 1 ; i <= num ; i++) {
            if(num % i == 0) {
                totalFactors += 1;
            }
        }
        return totalFactors == 2;
    }

    int optimal(int num) {
        int totalFactors = 0;
        int sqrtNum = sqrt(num);
        for(int i = 1 ; i <= sqrtNum ; i++) {
            if(num % i == 0) {
                totalFactors += 1;
                if(i != (num / i)) {
                    totalFactors += 1;
                }
            }
        }
        return totalFactors == 2;       
    }


    bool isPrime(int num) {
        // return bruteForce(num);      
        return optimal(num);
    }
};
