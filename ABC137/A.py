a,b = [int(i) for i in input().split()]

ans = [a+b, a-b, a*b]

print(max(ans))
