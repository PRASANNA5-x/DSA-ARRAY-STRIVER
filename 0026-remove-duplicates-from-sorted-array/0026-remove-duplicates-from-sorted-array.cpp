class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        // **EDGE CASE: empty array**
        if(n == 0) return 0;

        int j = 0;

        for(int i = 1; i < n; i++) {

            // **If current element is different from last unique**
            if(nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        return j + 1;
    }
};