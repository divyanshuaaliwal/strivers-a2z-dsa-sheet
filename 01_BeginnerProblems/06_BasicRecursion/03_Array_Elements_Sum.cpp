// URL: https://takeuforward.org/practice/dsa/sum-of-array-elements-ii

class Solution{	
	public:

        int recursion(vector<int>& nums, int n) {

            if(n == 0) {
                return 0;
            }

            return nums[n - 1] + recursion(nums, n - 1);
        }

		int arraySum(vector<int>& nums){
			
            int n = nums.size();

            return recursion(nums, n); 
		}
};
