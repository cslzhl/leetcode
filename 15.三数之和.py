#
# @lc app=leetcode.cn id=15 lang=python3
#
# [15] 三数之和
#

# @lc code=start
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        for first in range(len(nums)-2):
            target = nums[first]
            if (first > 0 and nums[first]==nums[first-1]):
                continue
            third = len(nums)-1
            for second in range(first+1,len(nums)-1):
                if second> first+1 and nums[second]==nums[second-1]:
                    continue
                while(second<third and nums[second]+nums[third]+target>0):
                    third -= 1
                if second == third:
                    break
                if nums[second] + nums[third] + target == 0:
                    res.append([nums[first], nums[second], nums[third]])
        return res
# @lc code=end

