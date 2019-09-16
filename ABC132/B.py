n = int(input())
p = [int(i) for i in input().split()]

count = 0
for i in range(1, n-1):
    tmp = sorted(p[i-1:i+2])
    if tmp[1] == p[i]:
        count+=1

print(count)
