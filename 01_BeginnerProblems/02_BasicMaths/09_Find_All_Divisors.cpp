// URL: https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1

class Solution {
  public:

    vector <int> bruteForce(int num) {
        vector <int> ans;
        for(int i = 1 ; i <= num ; i++) {
            if(num % i == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }

    vector <int> optimal(int num) {
        vector <int> ans;
        int sqrtNum = sqrt(num);
        for(int i = 1 ; i <= sqrtNum ; i++) {
            if(num % i == 0) {
                ans.push_back(i);
                if(i != (num / i)) {
                    ans.push_back(num / i);
                }
            }
        }

        sort(ans.begin(), ans.end());

        return ans;       
    }

    vector<int> getDivisors(int num) {
        // return bruteForce(num);      
        return optimal(num);
    }
};
