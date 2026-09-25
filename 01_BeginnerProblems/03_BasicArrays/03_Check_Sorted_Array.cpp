// URL: https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        
        int n = arr.size();
        
        for(int i = 1 ; i < n ; i++) {
            if(arr[i - 1] > arr[i]) {
                return false;
            }
        }
        
        return true;
    }
};
