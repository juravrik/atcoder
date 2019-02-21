s = input()
n = len(s)-1
ans = 0
for i in range(1 << n):
    p = 0
    for j in range(n):
        if i >> j & 1 == 0:
            continue
        else:
            ans += int(s[p:j+1])
            p = j+1
    ans += int(s[p:])

print(ans)
