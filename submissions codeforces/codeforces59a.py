# codeforces59a.py
a=raw_input()
upper=0
lower=0
for i in a:
	if i.isupper():
		upper+=1
	else:
		lower+=1
if upper>lower:
	print a.upper()
else:
	print a.lower()