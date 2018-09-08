n, m = [int(i) for i in input().split()]

x = 1900*m + 100*(n-m)
print(x*(2**m))
