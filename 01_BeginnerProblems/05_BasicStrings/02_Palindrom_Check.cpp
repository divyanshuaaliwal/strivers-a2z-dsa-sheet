// URL: https://www.geeksforgeeks.org/problems/palindrome-string0817/1

class Solution{
public:	
	
	int isPalindrome(string s) {
	    
        int n = s.size();
        int start = 0;
        int end = n - 1;
        
        while(start <= end) {  
           if(s[start] != s[end]) {
               return false;
           }
           start += 1;
           end -= 1;
        }

        return true;
	}

};
