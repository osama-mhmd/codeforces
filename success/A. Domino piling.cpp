#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short m, n;

  cin >> m >> n;

  short multiply = m * n;

  // 8 => 4, 9 => 4
  cout << (multiply - multiply % 2) / 2;

  return 0;
}