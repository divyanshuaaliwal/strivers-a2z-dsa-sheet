// URL: https://takeuforward.org/practice/dsa/check-if-string-is-palindrome-or-not-

class Solution{	
	public:		

        bool recursion(string& s, int start, int end) {

            if(start >= end) {
                return true;
            }

            if(s[start] != s[end]) {
                return false;
            }

            return recursion(s, start + 1, end - 1);
        }

		bool palindromeCheck(string& s){

            int n = s.size();
            int start = 0;
            int end = n - 1;
            
            return recursion(s, start, end);
		}
};
