#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;
  double result = 0;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int fraction;
    cin >> fraction;
    result += fraction;
  }

  cout << (result / (t * 100)) * 100;

  return 0;
}