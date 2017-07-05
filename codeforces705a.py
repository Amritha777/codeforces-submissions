# codeforces705a.py
n=input()
h="I hate"
l="I love"
ans=h
for i in xrange(1,n):
	if i%2==0:
		ans+=" that "+h
	else:
		ans+=" that "+l
print ans+" it"