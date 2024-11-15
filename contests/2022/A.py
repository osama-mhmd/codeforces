t = int(input())

for _ in range(t):
  n, r = map(int, input().split())

  a = list(map(int, input().split()))

  happy_members, i = (0, 0)
  alone_members = 0

  while True:
    if a[i] >= 2:
      happy_members += 2
      a[i] -= 2
      r -= 1
    elif a[i] == 1:
      alone_members += 1
      a[i] -= 1
      if i == n - 1:
        break
      else:
        i += 1
    else:
      if i == n - 1:
        break
      else:
        i += 1

  other_seats = 2 * r - alone_members
  if r >= alone_members: other_seats = alone_members

  print(happy_members + other_seats)