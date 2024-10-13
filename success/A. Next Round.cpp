#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short n, target, score, counter = 0;

  cin >> n >> target;

  short a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
  {
    if (a[i] >= a[target - 1] && a[i] != 0)
      counter++;
  }

  cout << counter;

  return 0;
}