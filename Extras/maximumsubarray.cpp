 #include <algorithm>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int curSum = 0;

        int size = (int)nums.size();
        for(int i = 0; i < size; i++){
            curSum += nums[i];
            maxSum = std::max(maxSum, curSum);

            if(curSum < 0){
                curSum = 0;
            }
        }

        return maxSum;
    }
};