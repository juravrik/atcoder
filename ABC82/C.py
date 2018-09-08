import collections

n = input()
a = [int(i) for i in input().split()]

c = collections.Counter(a)

s = 0
for i in c.most_common():
    if(i[1] > i[0]):
        s += (i[1]-i[0])
    elif(i[1] < i[0]):
        s += i[1]
print(s)
