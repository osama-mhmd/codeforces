t = int(input())

groups = 0
last_pole = None

for _ in range(t):
  magnet = input()

  if last_pole == magnet[0]: groups += 1

  last_pole = magnet[-1]

print(groups + 1)