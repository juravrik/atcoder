n, x = [int(i) for i in input().split()]
l = [int(i) for i in input().split()]

d = 0
count = 0
for i in l:
    if d > x:
        break
    count += 1
    d += i

if d <= x:
    count += 1
print(count)
