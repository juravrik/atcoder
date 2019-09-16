p, q, r = [int(i) for i in input().split()]

ans = [p+q, q+r, p+r]
print(min(ans))
