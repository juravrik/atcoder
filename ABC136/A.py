a, b, c = [int(i) for i in input().split()]

ans = c - a + b
if ans >= 0:
    print(c-a+b)
else:
    print(0)
