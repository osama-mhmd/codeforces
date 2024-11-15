t = int(input())

for i in range(t):
  n, operations = map(int, input().split())
  a = list(map(int, input().split()))

  a = sorted(set(a))
  
  result = 0
  
  for num in a:
    if num == result:
      result += 1
    elif operations > 0:  
      operations -= 1
    else:
      break  

  result += operations
  
  print(result)

# WHY
# ############################### COZ OF AI