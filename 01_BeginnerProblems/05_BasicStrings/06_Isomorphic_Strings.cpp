// URL: https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n1 = s.size();
        int n2 = t.size();
        
        if(n1 != n2) {
            return false;
        }

        unordered_map <char, char> mpp1;
        unordered_map <char, char> mpp2;

        for(int i = 0 ; i < n1 ; i++) {

            char ch1 = s[i];
            char ch2 = t[i];

            if(mpp1.find(ch1) != mpp1.end() && mpp2.find(ch2) != mpp2.end()) {
                if(ch1 != mpp2[ch2] || ch2 != mpp1[ch1]) {
                    return false;
                }
            }
            else if(mpp1.find(ch1) != mpp1.end() || mpp2.find(ch2) != mpp2.end()) {
                return false;
            }
            else {
                mpp1[ch1] = ch2;
                mpp2[ch2] = ch1;
            }
        }

        return true;
    }
};
