// URL: https://www.geeksforgeeks.org/problems/most-frequent-element-in-an-array/1

class Solution {
public:
    int sumOfHighestAndLowestFrequency(vector<int>& nums) {

        unordered_map<int, int> mpp;

        for(auto element: nums) {
            mpp[element] += 1;
        }

        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;

        for(auto it: mpp) {

            int value = it.second;
            
            maxFreq = max(maxFreq, value);
            minFreq = min(minFreq, value);
        }

        return maxFreq + minFreq;
    }
};