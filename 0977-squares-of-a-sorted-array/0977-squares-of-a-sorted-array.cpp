class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        
        // Step 1: square every number
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(nums[i] * nums[i]);
        }
        
        // Step 2: sort the squared numbers
        sort(result.begin(), result.end());
        
        return result;
    }
};