s = input()

sp = s[0]
ans = "Good"
for i in range(1, 4):
    if s[i] == sp:
        ans = "Bad"
        break
    sp = s[i]

print(ans)
