t = int(input())

for i in range(t):
  r = int(input())
  tasks = input()

  result = "YES"

  leavedTasks = {}

  for j in range(r):
    if tasks[j] in leavedTasks: 
      result = "NO"
      break
    if tasks[j - 1] != tasks[j] and j != 0: 
      leavedTasks[tasks[j - 1]] = True

  print(result)
