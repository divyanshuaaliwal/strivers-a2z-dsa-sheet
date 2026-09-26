// URL: https://takeuforward.org/practice/dsa/check-if-string-is-palindrome-or-not-

class Solution{	
	public:

        bool recursion(int i, int sqrtNum, int num) {

            if(i > sqrtNum) {
                return true ;
            }

            if(num % i == 0) {
                return false;
            }

            return recursion(i + 1, sqrtNum, num);
        }

		bool checkPrime(int num){

            if(num == 1) {
                return false;
            }

            int i = 2;
            int sqrtNum = sqrt(num);
            return recursion(i, sqrtNum, num);
		}
};
