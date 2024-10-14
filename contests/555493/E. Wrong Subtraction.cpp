#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;

  cin >> n >> k;

  while (k--)
  {
    string s = to_string(n);
    char last_digit = s[s.length() - 1];

    if (last_digit == '0')
      n /= 10;
    else
      n -= 1;
  }

  cout << n;

  return 0;
}