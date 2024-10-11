m, n, a = map(int, input().split())

# Making 2D Array
arr = [[0 for _ in range(n)] for _ in range(m)]

x, y = 0, 0

squares = 0

while True:
  for i in range(a):
    for j in range(a):
      arr[x + i][y + j] = 1

  squares += 1

  if x == m - a and y == n - a: break

  if x < m - a: x = min(x + a, m - a)
  elif y < n - a: 
    x = 0
    y = min(y + a, n - a)

print(squares)