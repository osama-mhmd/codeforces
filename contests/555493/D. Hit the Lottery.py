n = int(input())

dollars = [100, 20, 10, 5, 1]
bills, i = (0, 0)

while n > 0:
  if n >= dollars[i]:
    coins = n // dollars[i]
    n -= coins * dollars[i]
    bills += coins
  else: i += 1

print(bills)