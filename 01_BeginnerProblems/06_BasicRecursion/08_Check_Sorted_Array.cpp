// URL: https://takeuforward.org/practice/dsa/check-if-the-array-is-sorted-ii

class Solution{	
	public:

        bool recursion(vector<int>& nums, int n) {

            if(n == 1) {
                return true ;
            }

            if(nums[n - 1] < nums[n - 2]) {
                return false;
            }

            return recursion(nums, n - 1);
        }

		bool isSorted(vector<int>& nums){
			
            int n = nums.size();

            return recursion(nums, n);
		}
};
