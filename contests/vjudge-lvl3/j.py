from math import sqrt

t = int(input())

def isQuadratfrei(n: int):
  for i in range(2, int(sqrt(n)) + 1):
    if n % (i*i) == 0: return False
  return True

for _ in range(t):
  n = int(input())

  if isQuadratfrei(n): print("Yes")
  else: print("No") 