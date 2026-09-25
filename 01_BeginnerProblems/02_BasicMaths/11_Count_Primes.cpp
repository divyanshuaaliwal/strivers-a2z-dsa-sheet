// URL: https://leetcode.com/problems/count-primes/

class Solution {
public:

    bool isPrime(int num) {
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

    int bruteForce(int num) {
        int totalPrimeNumbers = 0;
        for(int i = 2 ; i < num ; i++) {
            totalPrimeNumbers += isPrime(i);
        }
        return totalPrimeNumbers;
    }

    int countPrimes(int num) {
        return bruteForce(num);
    }
};