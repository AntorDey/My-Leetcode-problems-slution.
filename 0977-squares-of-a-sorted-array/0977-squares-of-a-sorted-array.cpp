class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> array;
        
        // Step 1: square every number
        for (int i = 0; i < nums.size(); i++) {
            array.push_back(nums[i] * nums[i]);
        }
        
        // Step 2: sort the squared numbers
        sort(array.begin(), array.end());
        
        return array;
    }
};