// URL: https://leetcode.com/problems/rotate-string/

class Solution {
public:

    int bruteForce(string s, string goal) {
        
        int n1 = s.size();
        int n2 = goal.size();
        
        if(n1 != n2) {
            return false;
        }

        for(int i = 0 ; i < n1 ; i++) {
            if(s == goal) {
                return true;
            }
            s.push_back(s[0]);
            s.erase(0, 1);
        }

        return false;
    }

    int optimal(string s, string goal) {
        
        int n1 = s.size();
        int n2 = goal.size();        
        
        if(n1 != n2) {
            return false;
        }

        s += s;

        return s.find(goal) != string::npos ? true : false; 
    }

    bool rotateString(string s, string goal) {
        // return bruteForce(s, goal);
        return optimal(s, goal);
    }
};
