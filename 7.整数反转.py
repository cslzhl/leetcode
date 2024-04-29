#
# @lc app=leetcode.cn id=7 lang=python3
#
# [7] 整数反转
#

# @lc code=start
class Solution:
    def reverse(self, x: int) -> int:
        a = str(x)
        if a[0]=='-':
            a = a[0]+a[1:][::-1]
        else:
            a = a[::-1]
        a = int(a)
        if a<-2**31 or a> 2**31-1:
            return 0
        else:
            return a
# @lc code=end

