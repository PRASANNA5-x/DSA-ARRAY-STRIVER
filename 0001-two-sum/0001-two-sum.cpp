class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int , int> mpp;

        for(int i = 0 ; i < nums.size() ; i++)
        {

            int num = nums[i];

            int required = target - num ;

            if(mpp.find(required) != mpp.end())
            {
                return {mpp[required], i};
            }
            mpp[num]=i;
        }
        return {-1 , -1};
    }
};