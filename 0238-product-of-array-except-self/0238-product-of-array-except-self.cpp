class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(n,1);

      int pdt = 1;
      for(int i=0;i<n;i++){
        ans[i] = ans[i] * pdt;
        pdt = pdt*nums[i];
      }

      int product = 1;
      for(int j=n-1;j>=0;j--){
        ans[j] = ans[j]*product;
        product = product*nums[j];
      }
return ans;

    }
};