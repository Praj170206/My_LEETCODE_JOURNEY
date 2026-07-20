#include <vector>
#include <cmath>
#include <climits>

class Solution {
private:
    int maxEl(vector<int>& piles) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long totEl(vector<int>& piles, int mid) {
        long long totH = 0;
        int n = piles.size();

        for (int i = 0; i < n; i++) {
            totH += (piles[i] + mid - 1) / mid;  // Updated calculation
        }
        return totH;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        long long high = maxEl(piles);
        int ans = INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;
            long long totHr = totEl(piles, mid);
            if (totHr <= h) {
                ans = min(ans, mid);
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};