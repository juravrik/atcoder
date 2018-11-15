n = int(input())

k=0
temp=n
while(abs(temp) > 2):
    k+=1
    temp = temp/2

s=""
while n!=0:
    if n%2==0:
        s="0"+s
    else:
        s="1"+s
        n=n-1
    n/=-2

if s=="":
    print(0)
else:
    print(int(s))
