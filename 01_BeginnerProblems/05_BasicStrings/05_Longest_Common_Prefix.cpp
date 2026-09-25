// URL: https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:

    string bruteForce(vector<string>& strs) {

        int n = strs.size();

        if(n == 0)  return ""; 
        if(n == 1)  return strs[0];

        string firstStr = strs[0];
        int firstStrSize = strs[0].size();
        string longestCommonPrefix = "";

        for(int i = 0 ; i < firstStrSize ; i++) {
            char ch = firstStr[i];
            for(int j = 1 ; j < n ; j++) {
                if(ch != strs[j][i]) {
                    return longestCommonPrefix;
                }
            }
            longestCommonPrefix += ch;
        }

        return longestCommonPrefix;
    }

    string optimal(vector<string>& strs) {

        int n = strs.size();

        if(n == 0)  return ""; 
        if(n == 1)  return strs[0];

        sort(strs.begin(), strs.end());    
    
        string firstStr = strs[0];
        string lastStr = strs[n - 1];
        int firstStrSize = strs[0].size();
        string longestCommonPrefix = "";

        for(int i = 0 ; i < firstStrSize ; i++) {
            if(firstStr[i] != lastStr[i]) {
                return longestCommonPrefix;
            }
            longestCommonPrefix += firstStr[i]; 
        }

        return longestCommonPrefix;
    }

    string longestCommonPrefix(vector<string>& strs) {
        // return bruteForce(strs);
        return optimal(strs);
    }
};
