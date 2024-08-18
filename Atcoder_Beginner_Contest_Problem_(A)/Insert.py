n, k, x = map(int, input().split())
a = list(map(int, input().split()))
for i in range(k):
    print(a[i], end = " ")
print(x, end = " ")
for i in range(k,n):
    print(a[i])
print()
