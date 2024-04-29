#
# @lc app=leetcode.cn id=20 lang=python3
#
# [20] 有效的括号
#

# @lc code=start
class Solution:
    def isValid(self, s: str) -> bool:
        queue = []
        for i in s:
            if i in '([{':
                queue.append(i)
            else:
                if i==')' and len(queue)>0 and queue[-1]=="(":
                    queue.pop()
                elif i==']' and len(queue)>0 and queue[-1]=="[":
                    queue.pop()
                elif i=='}' and len(queue)>0 and queue[-1]=="{":
                    queue.pop()
                else:
                    return False
        if len(queue)==0:
            return True
        else:
            return False
# @lc code=end

