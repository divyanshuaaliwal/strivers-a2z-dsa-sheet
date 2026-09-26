// URL: https://takeuforward.org/practice/dsa/highest-occurring-element-in-an-array

class Solution {
public:
    int mostFrequentElement(vector<int>& arr) {

        unordered_map<int, int> mpp;

        for(auto element: arr) {
            mpp[element] += 1;
        }

        int maxFreq = 0;
        int element = 0;

        for(auto it: mpp) {

            int key = it.first;
            int value = it.second;
            
            if(value > maxFreq) {
                element = key;
                maxFreq = value;
            }
            else if(value == maxFreq) {
                element = min(element, key);
            }
        }

        return element;
    }
};
