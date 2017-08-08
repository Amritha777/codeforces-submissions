m,s=map(int,raw_input().split())
k=s
marr=[0 for i in xrange(m)]
maxarr=marr[::]
marr[m-1]=1
sm=s
# maxarr[0]=min(9,sm)
s-=1
# sm=sm-min(9,sm)

for i in xrange(0,m):
    marr[i]+=min(9,s)
    s-=min(9,s)
for i in xrange(0,m):
    maxarr[i]+=min(9,sm)
    sm-=min(9,sm)
if  len("".join(map(str,marr[::-1])))>m or len("".join(map(str,maxarr)))>m  :
    print -1,-1
else:
    print "".join(map(str,marr[::-1])),"".join(map(str,maxarr))
