a, b = [int(i) for i in input().split()]

ans =  (b-a)//(a-1)

if ans * (a-1) + a < b:
    print(ans+2)
else:
    print(ans+1)
