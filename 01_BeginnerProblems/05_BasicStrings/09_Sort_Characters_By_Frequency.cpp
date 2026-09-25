// URL: https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        
        vector<pair<char, int>> arr (256);  //  [{'\0', 0}, {'\0', 0}, {'\0', 0}]

        int n = s.size();
        for(int i = 0 ; i < n ; i++) {
            char ch = s[i];
            arr[ch].first = ch;
            arr[ch].second += 1;
        }

        auto lembda = [&] (pair<char, int>p1, pair<char, int>p2) {
            return p1.second > p2.second;
        };

        sort(arr.begin(), arr.end(), lembda);

        string str = "";
        for(auto &p: arr) {
            if(p.first != '\0') {
                str += string(p.second, p.first);
            }
        }

        return str;
    }
};
