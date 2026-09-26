// URL: https://takeuforward.org/practice/dsa/reverse-a-string-i

class Solution{	
public:		

    void recursion(vector<char>& s, int start, int end) {

        if(start >= end) {
            return ;
        }

        swap(s[start], s[end]);

        recursion(s, start + 1, end - 1);
    }

	vector<char> reverseString(vector<char>& s){
        
        int n = s.size();
        int start = 0;
        int end = n - 1;
        
        recursion(s, start, end);
	
        return s;
    }
};
