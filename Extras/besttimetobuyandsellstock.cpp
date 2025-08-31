#include <algorithm>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int N = (int)prices.size();
        int maxSum = 0;
        int sum = 0;
        int left = 0;
        int right = 1;
        
        while(right < N){
            sum = prices[right] - prices[left];
            if(sum > 0){
                maxSum = std::max(maxSum, sum);
            } else {
                left = right;
            }
            right++;
        }

        return maxSum;
    }
};