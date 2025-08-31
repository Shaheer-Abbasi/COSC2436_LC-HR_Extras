class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int SIZE = (int)nums.size();

        for(int i = 0; i < SIZE; i++){
            for(int j = (i + 1); j < SIZE; j++){
                if((nums[i] + nums[j]) == target){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }

        return res;
    }
};