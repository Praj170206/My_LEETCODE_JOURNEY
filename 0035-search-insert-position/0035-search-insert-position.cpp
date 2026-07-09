class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0 , high = n-1;
        int index = n ;  // Agar target sabse bade element se bhi bada hua, to index kabhi assign hi nahi hoga.
        while(low<=high){
            int mid = (low) + (high-low)/2;
            
            if(nums[mid] == target) {
                index = mid;
                break;
            }
            else if(nums[mid] < target)
             low = mid+1;
            else{
                index = mid;
                high = mid-1;
            } 
        }
        return index;
    }
};