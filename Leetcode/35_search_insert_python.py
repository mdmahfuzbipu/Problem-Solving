class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        size = len(nums)
        low, high = 0, size - 1
        ans = size
        while low <= high:
            mid = low + (high - low) // 2

            if nums[mid] >= target:
                ans = mid
                high = mid - 1

            else:
                low = mid + 1

        return ans
