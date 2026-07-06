class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int ans = 0,rem , num =x;
        while(num!=0){
            rem = num%10;
            num = num/10;
             // Check for positive overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) return 0;
             ans = ans*10 + rem;
 
        }
        if(x==ans) return true;
        else return false;

    }
};