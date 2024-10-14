n, m = map(int, input().split())

right = True

for i in range(n):
  if i % 2 == 0: print("".rjust(m, "#"))
  else:
    if right:
      print("".ljust(m - 1, ".").ljust(m, "#"))
      right = False
    else:
      print("".ljust(1, "#").ljust(m, "."))
      right = True