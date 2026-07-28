class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        if(n == 1) return s;

         map< char , int> mp;
         for(int i = 0;i < n;i++){
            mp[s[i]] ++ ;
         }       

         string left = "";
         string right = "";
         string middle = "";

         for(auto it : mp){
             // Add half of the characters to the left half
            for(int i = 0; i < it.second/2 ; i++){
                left += it.first;
            } 
                      // If frequency is odd, keep one character for the middle
         if(it.second % 2 == 1) {
            middle += it.first;
         }
    }
    right = left;
    reverse(right.begin(), right.end()); // reverse() returns void.
    
     return left + middle + right;
    }
};