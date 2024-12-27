k = int(input())
last_num = 1
count = 1
i = 1

def verify(n: int):
  s = str(n)

  if len(s) > 1 and int(s[len(s) - 1]) - int(s[0]) > len(s): return False

  for i in range(len(s)):
    if i > 0:
      if abs(int(s[i]) - int(s[i - 1])) > 1: return False
  return True

while count < k:
  i += 1
  if verify(i):
    count += 1
    last_num = i

print(last_num)
