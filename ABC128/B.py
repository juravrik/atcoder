n = int(input())

res = [] 
for i in range(n):
    si, pi = input().split()

    res.append([i, si, int(pi)])

for i in sorted(res, key = lambda w: (w[1], -w[2])):
    print(i[0]+1)

