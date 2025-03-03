class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        nums3 = [0]*(m+n)
        if m==0:
            nums1[:] = nums2
        else:
            i,j,k=0,0,0
            while i<m and j<n:
                if nums1[i] < nums2[j]:
                    nums3[k] = nums1[i]
                    i+=1
                else:
                    nums3[k]= nums2[j]
                    j+=1
                k+=1
            while i < m:
                nums3[k] = nums1[i]
                i += 1
                k += 1
            while j<n:
                nums3[k]=nums2[j]
                j+=1
                k+=1
            nums1[:]= nums3