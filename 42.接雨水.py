#
# @lc app=leetcode.cn id=42 lang=python3
#
# [42] 接雨水
#

# @lc code=start
class Solution:
    def trap(self, height):
        start,end = 0,len(height)-1
        res = 0
        minv = 0
        while(start<end):
            while(start<end and height[start]==0):
                start+=1
            while(start<end and height[end]==0):
                end-=1
            if height[start]<height[end]:
                minv = height[start]
            else:
                minv = height[end]
            for i in range(start,end+1):
                height[i] = height[i]-minv
                if height[i]<0:
                    res-=height[i]
                    height[i] = 0
        return res
            
# S = Solution()
# S.trap([4,2,0,3,2,5])     
                    
# @lc code=end

