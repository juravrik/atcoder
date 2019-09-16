n = int(input())
w = [int(i) for i in input().split()]

dif = 9999
for i in range(n):
    pre = sum(w[:i+1])
    post = sum(w[i+1:])

    if dif > abs(post-pre):
        dif = abs(post-pre)

print(dif)
