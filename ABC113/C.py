n,m = [int(i) for i in input().split()]

def zeropad(text):
    return ("000000"+text)[-6:]

py={}
for i in range(m):
    pi, yi = [int(i) for i in input().split()]
    try:
        py[pi].append([i, yi])
    except:
        py[pi]=[[i, yi]]

ans=[]
for k, v1 in py.items():
    for ind, v2 in enumerate(sorted(v1, key=lambda x:x[1])):
        ans.append([v2[0], zeropad(str(k))+zeropad(str(ind+1))])

for k, v in sorted(ans, key=lambda x:x[0]):
    print(v)

"""
ans=[]
for i in range(1,m+1):
    a = []
    for j, v in enumerate(py):
        if v[0] == i:
            a.append([j, v[1]])

    city="000000"+str(i)
    city = city[-6:]
    for j, v in enumerate(sorted(a, key=lambda x:x[1])):
        num="000000"+str(j+1)
        num=num[-6:]
        ans.append([v[0], city+num])

for i in sorted(ans, key=lambda x:x[0]):
    print(i[1])
"""
