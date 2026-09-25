// URL: https://www.geeksforgeeks.org/problems/count-odd-even/1

class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        
        int totalOddNumbers = 0;  
        int totalEvenNumbers = 0;
        
        for(auto element: arr) {
            element % 2 == 1 ? totalOddNumbers += 1 : totalEvenNumbers += 1;
        }
        
        return {totalOddNumbers, totalEvenNumbers};
    }
};
