class Solution {
public:
    long long sumAndMultiply(int n) {
    
        string ans;
        string s = to_string(n);
        for(int i=0;i<s.length(); i++){
            if(s[i] != '0'){
                 ans += s[i];
            }
        }

        if (ans.empty()) {
    return 0;
} 
        long long V = stoll(ans);
        long long num = V;
        int rem , sum = 0;
        while(V!=0){
          rem = V%10;
          V = V/10;
          sum = sum + rem;
        }
        
        return num*sum;

    }
};