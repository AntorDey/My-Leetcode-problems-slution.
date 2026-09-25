// class Solution {
// public:
//     int minPairSum(vector<int>& nums) {
//         int minNum = nums[0];  // assume first element is smallest
//         int maxNum = nums[0];  // assume first element is largest

//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] < minNum) {
//                 minNum = nums[i];  // update minimum
//             }
//             if (nums[i] > maxNum) {
//                 maxNum = nums[i];  // update maximum
//             }
//         }

//         return minNum + maxNum;  // sum both
//     }
// };
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // added: sort first

        int left = 0;
        int right = nums.size() - 1;
        int maxNum = 0;  // will hold the largest pair sum

        while (left < right) {
            int pairSum = nums[left] + nums[right];
            if (pairSum > maxNum) {
                maxNum = pairSum;  // update maximum
            }
            left++;
            right--;
        }

        return maxNum;
    }
};