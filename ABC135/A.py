a, b = [int(i) for i in input().split()]
ans = a+b
if ans % 2 == 1:
    print("IMPOSSIBLE")
else:
    print(ans//2)
