// URL: https://takeuforward.org/practice/dsa/count-of-odd-numbers-in-array

class Solution{
public:
    int countOdd(int arr[], int n){
        
        int totalOddNumbers = 0;  
        
        for(int i = 0 ; i < n ; i++) {
            if(arr[i] & 1) {
                totalOddNumbers += 1;
            }
        }
        
        return totalOddNumbers;
    }
};
