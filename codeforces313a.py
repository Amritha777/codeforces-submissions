# codeforces313a.py
str=raw_input()
n=len(str)
s1=str[:n-1]
s2=str[:n-2]+str[n-1]
print max(int(str),int(s1),int(s2))