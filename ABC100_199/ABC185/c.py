L = int(input())
ans = 1
for i in range(1, 12):
  ans *= L - i
for i in range(1, 12):
  ans //= i
print(ans)