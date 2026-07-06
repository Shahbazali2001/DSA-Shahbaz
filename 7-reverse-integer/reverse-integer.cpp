class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        while(x != 0){
            int last = x % 10;
            reverse = reverse * 10 + last;
            x /=10;
        }

    if (reverse > INT_MAX || reverse < INT_MIN) return 0;
    return reverse; 

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna