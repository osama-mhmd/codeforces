t = int(input())

def isVowel(char):
  return char in "aeiouAEIOU"

for i in range(t):
  r = int(input())
  string = input()

  cursor = 0

  result = []

  for j in range(r):
    # First testing is the letter is vowel
    if isVowel(string[j]):
      endpoint = j + 1

      # Then, we will see if the next two letter are not vowels
      # like "babce" => "bab", "ce"
      if j + 2 < len(string):
        if not isVowel(string[j + 2]): 
          endpoint += 1
      else:
        # If the string is "bab", then we need to add the last letter
        endpoint += 1
      result.append(string[cursor:endpoint])
      cursor = endpoint

  print(".".join(result))
