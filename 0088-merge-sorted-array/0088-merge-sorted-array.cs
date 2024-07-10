public class Solution {
    public void Merge(int[] nums1, int m, int[] nums2, int n) {
          int[] nums3 = new int[m + n];
        int i = 0, j = 0, idx = 0;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
                nums3[idx++] = nums1[i++];
            else
                nums3[idx++] = nums2[j++];
        }
        while (i < m)
            nums3[idx++] = nums1[i++];
        while (j < n)
            nums3[idx++] = nums2[j++];
        Array.Copy(nums3, nums1, m + n);
    }
}