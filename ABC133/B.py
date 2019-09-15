n, d = [int(i) for i in input().split()]

x = []
for i in range(n):
    x.append([int(i) for i in input().split()])


count = 0
for i in range(n):
    for j in range(i+1, n):
        s = 0
        for k in range(d):
            s += (x[i][k] - x[j][k]) ** 2

        if s ** 0.5 % 1 == 0:
            count += 1

print(count)

