# codeforces4c.py
n=input()
d={}
for i in xrange(n):
	s=raw_input()
	if not s in d.keys():
		print "OK"
		d[s]=1
	else:
		print s+str(d[s])
		d[s]+=1
