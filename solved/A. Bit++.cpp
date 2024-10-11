#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short input, a, b, c;

  cin >> input;

  int result = 0;

  for (int i = 0; i < input; i++)
  {
    string operation;
    cin >> operation;
    if (operation == "X++" || operation == "++X")
    {
      result++;
    }
    else if (operation == "X--" || operation == "--X")
    {
      result--;
    }
  }

  cout << result;

  return 0;
}