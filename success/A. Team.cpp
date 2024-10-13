#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short input, a, b, c;

  cin >> input;

  int correctProblems = 0;

  for (int i = 0; i < input; i++)
  {
    cin >> a >> b >> c;

    if (a + b + c >= 2)
    {
      correctProblems++;
    }
  }

  cout << correctProblems;

  return 0;
}