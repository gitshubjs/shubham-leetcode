class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; --i) {
            // Increment and return if digit < 9 (no carry needed)
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            // Handle carry: 9 wraps around to 0
            digits[i] = 0;
        }
        
        // If all digits were 9 (e.g., 999 -> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};