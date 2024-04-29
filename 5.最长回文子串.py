#
# @lc app=leetcode.cn id=5 lang=python
#
# [5] 最长回文子串
#

# @lc code=start
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        maxstr = ''
        for i in range(len(s)):
            start,end = i,i
            while(start>0 and end<len(s)-1):
                if s[start-1]==s[end+1]:
                    start-=1
                    end+=1
                else:
                    break
            if (end-start+1)>len(maxstr):
                maxstr = s[start:(end+1)]
            start,end = i,i+1
            if end<len(s) and s[end]==s[start]:
                while(start>0 and end<len(s)-1):
                    if s[start-1]==s[end+1]:
                        start-=1
                        end+=1
                    else:
                        break
                if (end-start+1)>len(maxstr):
                    maxstr = s[start:(end+1)]
        return maxstr
# @lc code=end

