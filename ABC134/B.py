n, d = [int(i) for i in input().split()]

tmp = (2*d+1)
ans = n//tmp
if ans*tmp >= n:
    print(ans)
else:
    print(ans+1)
