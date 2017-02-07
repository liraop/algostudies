inp = [int(x) for x in input().split()]
a = []
a.append(inp[0])
a.append(inp[1])
n = inp[2]
for i in range(2,n):
    a.append(a[i-2] + a[i-1]*a[i-1])

print(a[n-1])
