// URL: https://www.geeksforgeeks.org/problems/reverse-an-array/1

class Solution {
  public:
    void reverseArray(vector<int> &arr) {

        int n = arr.size();
        int start = 0;
        int end = n - 1;
    
        while(start <= end) {  
            swap(arr[start], arr[end]);
            start += 1;
            end -= 1;
        }
    }
};
