class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int n = s.length();
        int m = t.length();

        map<char ,int> mpp1;
        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
        }
       
       map<char , int> mpp2;
       for(int i=0;i<m;i++){
        mpp2[t[i]]++;
       }

     if(mpp1 == mpp2) return true;
     else return false;
    }
};