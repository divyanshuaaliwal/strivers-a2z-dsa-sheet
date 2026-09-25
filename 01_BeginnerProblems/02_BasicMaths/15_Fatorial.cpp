// URL: https://www.geeksforgeeks.org/problems/factorial5739/1

class Solution{
public:

    long long recursion(int num) {
       
        if(num == 0 || num == 1) {
            return 1;
        }
        
        long long ans = num * recursion(num - 1);
        return ans ;
    }
    
    long long usingLoop(int num){
        
        if(num == 0 || num == 1) {
            return 1;
        }
        
        long long ans = 1;
        for(int i = 1 ; i <= num ; i++) {
            ans = ans * i;
        }
        
        return ans;
    }
    
    long long int factorial(int num) {
        // return recursion(num);
        return usingLoop(num);
    }
};
