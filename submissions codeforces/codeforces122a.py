a=input()
t=[]
b=a
while(a):
	t.append(a%10)
	a/=10
t=list(set(t))
lucky=False
if t==[4,7] or t==[7,4] or b%4==0 or b%7==0 or b%44==0 or b%47==0 or b%74==0 or b%77==0 or b%444==0 or b%447==0 or b%474==0 or b%477==0:
	print "YES"
else:
	print "NO"
