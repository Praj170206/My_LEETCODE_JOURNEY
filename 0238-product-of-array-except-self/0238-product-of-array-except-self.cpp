class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int pdt = 1;
        vector<int> prefix(n);

        for(int i=0;i<nums.size();i++){
            prefix[i] = pdt;
            pdt = pdt*nums[i];
        }

        int product = 1;
        vector<int> suffix(n);
        for(int i=nums.size()-1;i>=0;i--){
            suffix[i] = product;
            product = product*nums[i];
        }
    //   reverse(suffix.begin(), suffix.end());


      for(int i=0;i<n;i++){
        ans[i] = prefix[i]*suffix[i];
      }

return ans;


    }
};