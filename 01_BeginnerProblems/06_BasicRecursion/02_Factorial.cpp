// URL: https://takeuforward.org/practice/dsa/factorial-of-a-given-number-ii

class Solution{	
	public:
		long long int factorial(int n){
			
            if(n == 0 || n == 1) {
                return 1;
            }

            return n * factorial(n - 1);
		}
};
