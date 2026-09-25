// URL: https://takeuforward.org/practice/dsa/second-highest-occurring-element

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        
        unordered_map<int, int> mpp;

        for(auto element: nums) {
            mpp[element] += 1;
        }

        int firstMaxFreq = -1;
        int firstMaxElement = -1;
        int secondMaxFreq = -1;
        int secondMaxElement = -1;

        for(auto it: mpp) {

            int key = it.first;
            int value = it.second;
            
            if(value > firstMaxFreq) {
                secondMaxElement = firstMaxElement;
                secondMaxFreq = firstMaxFreq;
                firstMaxElement = key;
                firstMaxFreq = value;
            }
            else if(value == firstMaxFreq) {
                firstMaxElement = min(firstMaxElement, key);
            }
            else if(value > secondMaxFreq) {
                secondMaxElement = key;
                secondMaxFreq = value;               
            }
            else if(value == secondMaxFreq) {
                secondMaxElement = min(secondMaxElement, key);
            }
        }

        return secondMaxElement;
    }
};
