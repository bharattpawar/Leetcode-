class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int total=n+m;
        if(n>m){
            return findMedianSortedArrays(nums2,nums1);
        }
        int low=0;
        int high=n;
        int l1=INT_MIN;
        int l2=INT_MIN;
        int r1=INT_MAX;
        int r2=INT_MAX;
        while(low<=high){
            int mid1=low+(high-low)/2;
int mid2=(total+1)/2-mid1;
r1 = (mid1 < n) ? nums1[mid1] : INT_MAX;
l1 = (mid1 > 0) ? nums1[mid1-1] : INT_MIN;

r2 = (mid2 < m) ? nums2[mid2] : INT_MAX;
l2 = (mid2 > 0) ? nums2[mid2-1] : INT_MIN;
        if(l1<=r2&&l2<=r1){
                 if (total % 2 == 1) {
                    return max(l1, l2);
                }

                // Even
                return (max(l1, l2) + min(r1, r2)) / 2.0;
        }
        if(l2>r1){
            low=mid1+1;
        }
        else{
            high=mid1-1;
        }
        }
        return -1.0;
    }
};