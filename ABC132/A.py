import collections
s = input()

d = dict(collections.Counter(s))

if len(d) == 2 and len(set(d.values())) == 1:
    print("Yes")
else:
    print("No")
