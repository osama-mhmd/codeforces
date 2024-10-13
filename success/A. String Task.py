string = input().lower()

letters = []

def isVowel(char):
  return char in "aeiouy"

for char in string:
  if not isVowel(char): letters.append(char)

print("." + ".".join(letters))