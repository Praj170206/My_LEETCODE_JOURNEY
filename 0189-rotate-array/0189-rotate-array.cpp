class Solution {
public:
    void reversePart(vector<int>& nums, int start, int end){
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
 void rotate(vector<int>& nums, int k) {
         int n = nums.size();

         k = k%n;

         reversePart(nums , 0 , n-k-1);
         reversePart(nums , n-k, n-1);
         reversePart(nums,0,n-1);

    }
};