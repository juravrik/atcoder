n = int(input())
p = [int(i) for i in input().split()]

count = 0
for i, pi in enumerate(p):
    if (i+1) != pi:
        count+=1
    if count > 2:
        break

if count == 2 or count == 0:
    print("YES")
else:
    print("NO")
