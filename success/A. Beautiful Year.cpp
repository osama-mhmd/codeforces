#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isDistinct(int year)
{
  set<char> digits;
  string yearStr = to_string(year);
  for (char digit : yearStr)
  {

    if (digits.count(digit) > 0)
    {
      return false;
    }
    digits.insert(digit);
  }
  return true;
}

int main()
{
  short year;

  cin >> year;

  // as we are searching for the next distinct year
  year++;

  while (!isDistinct(year))
  {
    year++;
  }

  cout << year;

  return 0;
}