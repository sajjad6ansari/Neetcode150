class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();

        // Initialize two pointers:
        // 'i' starts from the beginning (0-based index)
        // 'j' starts from the end (n-1)
        int i = 0, j = n - 1;

        // Loop until the two pointers meet
        while (i < j) {
            int sum = nums[i] + nums[j];

            // If the sum of the two elements equals the target,
            // return their indices converted to 1-based indexing
            if (sum == t) return {i + 1, j + 1};

            // If the sum is too big, move the right pointer left
            else if (sum > t) j--;

            // If the sum is too small, move the left pointer right
            else i++;
        }

        // According to problem statement, there's always one solution,
        // so this return is just for safety and completeness
        return {};
    }
};
