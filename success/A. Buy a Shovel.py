cost, r = map(int, input().split())

shovels = 1

while (cost * shovels) % 10 != r and (cost * shovels) % 10 != 0: 
  shovels += 1

print(shovels)