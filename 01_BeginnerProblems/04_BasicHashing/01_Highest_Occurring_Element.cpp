// URL: https://www.geeksforgeeks.org/problems/most-frequent-element-in-an-array/1

class Solution {
public:
    int mostFreqEle(vector<int>& arr) {

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
                element = max(element, key);
            }
        }

        return element;
    }
};
