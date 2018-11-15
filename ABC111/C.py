n = int(input())
v = [int(i) for i in input().split()]

even={}
odd={}
for i, num in enumerate(v):
    if i%2==0:
        try:
            even[num]+=1
        except:
            even[num]=1
    else:
        try:
            odd[num]+=1
        except:
            odd[num]=1

even = sorted(even.items(), key=lambda x:x[1], reverse=True)
odd = sorted(odd.items(), key=lambda x:x[1], reverse=True)

if even[0][0] != odd[0][0]:
    print(n - even[0][1] - odd[0][1])
elif len(even) == 1 and len(odd) == 1:
    print(int(n/2))
elif len(even) == 1 and len(odd) != 1:
    print(n - even[0][1] - odd[1][1])
elif len(even) != 1 and len(odd) == 1:
    print(n - even[1][1] - odd[0][1])
elif even[0][1]+odd[1][1] > odd[0][1]+even[1][1]:
    print(n - even[0][1] - odd[1][1])
else:
    print(n - even[1][1] - odd[0][1])
            
