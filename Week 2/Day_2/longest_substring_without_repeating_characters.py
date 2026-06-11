class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxlen=0
        currs=""
        for i in s:
            if i in currs:
                idx = currs.find(i)
                currs = currs[idx + 1:]
            currs = currs + i
            if len(currs) > maxlen:
                maxlen = len(currs)

        return maxlen
        