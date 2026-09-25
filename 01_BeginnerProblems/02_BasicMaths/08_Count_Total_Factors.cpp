// URL: https://www.geeksforgeeks.org/problems/number-of-factors1435/1

class Solution {
  public:
  
    int bruteForce(int num) {
        int totalFactors = 0;
        for(int i = 1 ; i <= num ; i++) {
            if(num % i == 0) {
                totalFactors += 1;
            }
        }
        return totalFactors;
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
        return totalFactors;       
    }
    
  
    int countFactors(int num) {
        // return bruteForce(num);      
        return optimal(num);
    }
};

//     n = 16 


//     i  (n/i)

//     1 * 16 
//     2 * 8
//     4 * 4  <--- sqrt(N)
//     8 * 2 
//    16 * 1