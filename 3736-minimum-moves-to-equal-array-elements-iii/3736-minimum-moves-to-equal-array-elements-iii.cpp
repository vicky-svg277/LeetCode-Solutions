class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = nums[0];
        for (int x : nums) {
            mx = max(mx, x);
        }
        int ans = 0;
        for (int x : nums) {
            ans += mx - x;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna