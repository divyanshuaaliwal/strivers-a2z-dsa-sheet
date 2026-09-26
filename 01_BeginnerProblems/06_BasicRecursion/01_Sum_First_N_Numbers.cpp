// URL: https://takeuforward.org/practice/dsa/sum-of-first-n-numbers

class Solution{	
	public:
		int NnumbersSum(int n){

            if(n == 0) {
                return 0;
            }

            return n + NnumbersSum(n - 1);
		}
};
