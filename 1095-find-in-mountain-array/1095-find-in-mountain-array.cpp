class Solution {
public:

    int findPeak(MountainArray &arr) {
        int lo = 0;
        int hi = arr.length() - 1;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (arr.get(mid) < arr.get(mid + 1)) {
                // Increasing side
                lo = mid + 1;
            }
            else {
                // Decreasing side
                hi = mid;
            }
        }

        return lo;
    }

    int binarySearchAscending(MountainArray &arr, int lo, int hi, int target) {

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int val = arr.get(mid);

            if (val == target)
                return mid;

            if (val < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return -1;
    }

    int binarySearchDescending(MountainArray &arr, int lo, int hi, int target) {

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int val = arr.get(mid);

            if (val == target)
                return mid;

            if (val > target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {

        int peak = findPeak(mountainArr);

        // First search increasing part
        int ans = binarySearchAscending(
            mountainArr, 0, peak, target
        );

        if (ans != -1)
            return ans;

        // Then search decreasing part
        return binarySearchDescending(
            mountainArr, peak + 1,
            mountainArr.length() - 1,
            target
        );
    }
};