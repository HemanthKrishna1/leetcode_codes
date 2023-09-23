class Solution:
    def reverseWords(self, s: str) -> str:
        return " ".join(list(filter(lambda x : not(x == ''), s.split(' ')))[::-1])