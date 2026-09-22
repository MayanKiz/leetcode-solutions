class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        a = sorted(nums1 + nums2)
        n = len(a)

        if n % 2 == 1:
            return float(a[n // 2])
        else:
            return (a[n // 2 - 1] + a[n // 2]) / 2.0