n=input();
arr=map(int,raw_input().split())
a=arr.count(max(arr))*arr.count(min(arr))
if max(arr)-min(arr)==0:
	a=arr.count(max(arr))*(arr.count(max(arr))-1)/2
print max(arr)-min(arr),a;