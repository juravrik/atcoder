n = int(input())
a = [int(a) for a in input().split()]

a = [1/i for i in a]
print(1/sum(a))
