n=input()
a=map(int, raw_input().split())
max=max(a)
def fn(x):
    return max-x
a=map(fn,a)
print sum(a)
