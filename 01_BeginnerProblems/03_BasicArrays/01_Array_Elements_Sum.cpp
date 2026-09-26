// URL: https://www.geeksforgeeks.org/problems/sum-all-array-elements/1

class Solution {
  public:
    int arraySum(vector<int>& arr) {
        
        int sum = 0;
        int n = arr.size();
        
        for(int i = 0 ; i < n ; i++) {
            sum += arr[i];
        }
        
        return sum;
    }
};