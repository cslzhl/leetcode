#
# @lc app=leetcode.cn id=11 lang=python3
#
# [11] 盛最多水的容器
#

# @lc code=start
class Solution:
    def maxArea(self, height: List[int]) -> int:
        start,end = 0,len(height)-1
        maxarea = 0
        while(start<end):
            if height[start]<height[end]:
                maxarea = max(maxarea,height[start]*(end-start))
                start+=1
            else:
                maxarea = max(maxarea,height[end]*(end-start))
                end-=1
        return maxarea
# @lc code=end

