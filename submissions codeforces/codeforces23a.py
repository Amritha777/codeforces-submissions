s,n=map(int,raw_input().split())
arr=[]
t=n
while n:
	a,b=map(int,raw_input().split())
	arr.append((a,b))
	n-=1;
arr.sort()
ans=True
for i in xrange(0,t):
	if arr[i][0]<s:
		s+=arr[i][1]
	else:
		ans=False
		break
if ans:
	print"YES"
else:
	print "NO"