n = input()
a = [int(i) for i in input().split()]

fmax=0
for i in a:
    fmax += i-1
print(fmax)
