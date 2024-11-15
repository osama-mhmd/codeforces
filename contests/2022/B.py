# Approach
# 1- we will have i = 0, j = 1, k = 2
# 2- Then we will minus a[i], .. a[k] with one
# 3- and increase the m with one
# 4- if one of them is zero we will do this i = max(i, j, k) + 1
# 5- if i or j or k has exceeded the n then i or j or k will ne None 

t = int(input())

for _ in range(t):
  n, x = map(int, input().split())

  a = list(map(int, input().split()))

  m = 0
  i, j, k = (0, 1, 2)

  def doFunc(index, a):
    if index < n:
      if a[index] > 0: a[index] -= 1
      else: 
        index = max(i, j, k) + 1

    return index

  while i < n or j < n or k < n:
    i = doFunc(i, a)
    j = doFunc(j, a)
    k = doFunc(k, a)

    m += 1

  print(m)