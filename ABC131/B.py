n, l = [int(i) for i in input().split()]

p = [l+i-1 for i in range(1, n+1)]

dif = 9999
ans = 0
for i in range(n):
    pre = p[:i]
    post = p[i+1:]

    tmp = sum(pre) + sum(post)

    if abs(sum(p) - tmp) < dif:
        ans = tmp
        dif  = abs(sum(p) - tmp)

print(ans)
