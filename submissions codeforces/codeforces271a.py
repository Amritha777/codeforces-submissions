# codeforces271a.py
a=input()
c=a+1
b=map(int,[i for i in str(c)])

while b[0]==b[1] or b[0]==b[2] or b[0]==b[3] or b[1]==b[2] or b[1]==b[3] or b[2]==b[3]:
	c+=1
	b=map(int,[i for i in str(c)])
	
print c
