// URL: https://leetcode.com/problems/valid-palindrome/

class Solution {
public:

    void convertToValidString(string& str) {
        int index = 0;
        while(index < str.size()) {
            if((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= '0' && str[index] <= '9')) {
                index += 1;
            }
            else if(str[index] >= 'A' && str[index] <= 'Z') {
                str[index] = tolower(str[index]);
                index += 1;
            }
            else {
                str.erase(index, 1);
            }
        }
    }

    bool bruteForce(string s) {

        convertToValidString(s);

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

    bool isValid(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    bool optimal(string s) {

        int n = s.size();
        int start = 0;
        int end = n - 1;

        while(start <= end) {

            if(!isValid(s[start])) {
                start += 1;
            }
            else if(!isValid(s[end])) {
                end -= 1;
            }
            else if(tolower(s[start]) == tolower(s[end])) {
                start += 1;
                end -= 1;
            }
            else {
                return false;
            }
        }

        return true;
    }

    bool isPalindrome(string s) {
        // return bruteForce(s);
        return optimal(s);
    }
};
