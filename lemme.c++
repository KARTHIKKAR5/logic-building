class Solution {
public:
    long long lcm(int a, int b) {
        int x = a, y = b;

        // Euclidean algorithm for GCD
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }

        int gcd = x;

        return (1LL * a * b) / gcd;
    }
};