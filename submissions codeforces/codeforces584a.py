# codeforces584a.py
n,t=map(int,raw_input().split())
ans=str(t/10+t%10)
for i in xrange(0,n-1):
	ans+=str(t%10)
if n<len(str(t)):
	ans="-1"
print ans