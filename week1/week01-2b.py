#week01-2b.py 使用 python 的版本2 使用.find() 函式
#Leetcode 28. Find the Index of the First Occurrence in a String
# 在haystack乾稻草堆裡找到 needle 針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
