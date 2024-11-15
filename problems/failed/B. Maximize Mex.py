t = int(input())

for i in range(t):
  n, operations = map(int, input().split())

  a = list(set(map(int, input().split())))
  
  result = None

  for j in range(len(a)):
    if not a[j] == j: 
      result = j
      break

  if result is None:
    result = len(a)

  print(result)

# WHY
# Misunderstanding of the problem