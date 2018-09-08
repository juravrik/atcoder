abcd = int(input())
a = abcd//1000
b = (abcd//100) % 10
c = (abcd//10) % 10
d = abcd % 10
op = ['+', '-']


def func(x, s):
    if s == '+':
        return x
    else:
        return -x


opelands = [[i, j, k] for i in op for j in op for k in op]
for i in opelands:
    ans = a
    ans += func(b, i[0])
    ans += func(c, i[1])
    ans += func(d, i[2])

    if ans == 7:
        print(str(a)+i[0]+str(b)+i[1]+str(c)+i[2]+str(d)+'=7')
        break
