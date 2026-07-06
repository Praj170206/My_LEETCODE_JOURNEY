class Solution {
public:
    int reverse(int x) {
        int ans = 0, num = x , rem;
        while(num!= 0){
            rem = num%10;
            num /= 10;
          // Check for positive overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) return 0;
            // Check for negative underflow
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8)) return 0;
            ans = ans*10 + rem;
        }
        return ans;
    }
};