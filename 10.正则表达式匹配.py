#
# @lc app=leetcode.cn id=10 lang=python3
#
# [10] 正则表达式匹配
#

# @lc code=start
class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        for i,v in enumerate(p):
            if v == s[i] or v =='.':
                continue
            else:
                if v == '*':
                    
# @lc code=end

