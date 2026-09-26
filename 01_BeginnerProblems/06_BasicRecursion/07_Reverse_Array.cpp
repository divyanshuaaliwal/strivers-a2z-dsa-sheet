// URL: https://takeuforward.org/practice/dsa/reverse-an-array-ii

class Solution{	
	public:

        void recursion(vector<int>& nums, int start, int end) {

            if(start >= end) {
                return ;
            }

            swap(nums[start], nums[end]);

            recursion(nums, start + 1, end - 1);
        }

		vector<int> reverseArray(vector<int>& nums){			
			
            int n = nums.size();
            int start = 0;
            int end = n - 1;
            
            recursion(nums, start, end);
        
            return nums;
		}
};
