class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // k, n theke boro hole eta dorkar

        vector<int> temp(n);

        // notun position e bosao: (i+k)%n
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }

        nums = temp; // original array update kore dilam
    }
};

