// URL: https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1

class Solution {
  public:
    vector<int> getDivisors(int num) {
        
        vector <int> ans;
    
        int sqrtNum = sqrt(num);
        for(int i = 1 ; i <= sqrtNum ; i++) {
            if(num % i == 0) {
                ans.push_back(i);
                if(i != num / i) {
                    ans.push_back(num / i);
                }
            }
        } 
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};
