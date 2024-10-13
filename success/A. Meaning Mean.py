t = int(input())

for i in range(t):
  n = int(input())

  a = list(map(int, input().split()))

  a.sort()

  sum = a[0]

  for j in range(n - 1):
    sum = (sum + a[j + 1]) // 2


  print(sum)