k2,k3,k5,k6=map(int,raw_input().split())
k256=min(k2,k5,k6)
k2,k5,k6=k2-k256,k5-k256,k6-k256
k32=min(k2,k3)
print 256*k256+32*k32