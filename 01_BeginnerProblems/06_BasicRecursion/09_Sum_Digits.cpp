// URL: https://takeuforward.org/practice/dsa/sum-of-digits-in-a-given-number

class Solution{
public:
	int addDigits(int num){
        
        if(num < 10) {
            return num;
        }

        return addDigits((num % 10) + (num / 10));
	}
};
