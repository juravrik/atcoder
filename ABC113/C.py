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

