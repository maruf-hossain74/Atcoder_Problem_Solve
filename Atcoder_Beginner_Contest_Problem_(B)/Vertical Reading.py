s,t =  map(str, input().split())
ans = False
for i in range(1,len(s)):
    for j in range(i):
        if s[j::i] == t:
            ans = True
            break
    if ans:
        break

print("Yes" if ans else "No")
