#
# @lc app=leetcode.cn id=53 lang=python3
#
# [53] 最大子数组和
#

# @lc code=start
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxv = 0
        cur = 0
        for i in nums:
            if cur+i>0:
                cur=cur+i
                if cur>maxv:
                    maxv = cur
            else:
                cur = 0
        if maxv == 0:
            maxv = max(nums)
        return maxv
# @lc code=end

