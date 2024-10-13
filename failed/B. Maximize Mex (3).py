t = int(input())

for _ in range(t):
  n, x = map(int, input().split())
  a = list(map(int, input().split()))

  unique_elements = sorted(set(a))
  
  current_mex = 0 
  operations = x

  for elem in unique_elements:
    while current_mex < elem and operations > 0:
      current_mex += 1
      operations -= 1
      
    if current_mex == elem:
      current_mex += 1 

  repeat_elements = [x for x in a if x not in unique_elements]

  for elem in repeat_elements:
    if elem + operations is current_mex + 1: current_mex += 1
  
  print(current_mex)
