#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getPrimeDivisors(int n)
{
  int result = 0;

  if (n % 2 == 0)
  {
    result++;
  }
  while (n % 2 == 0)
  {
    n = n / 2;
  }

  for (int i = 3; i <= sqrt(n); i = i + 2)
  {
    if (result > 2)
    {
      break;
    }
    if (n % i == 0)
    {
      result++;
    }
    while (n % i == 0)
    {
      n = n / i;
    }
  }

  if (n > 2)
  {
    result++;
  }

  return result;
}

int main()
{
  int n, result = 0;
  cin >> n;

  for (int i = 6; i <= n; i++)
  {
    int primesDivisors = getPrimeDivisors(i);

    if (primesDivisors == 2)
    {
      result++;
    }
  }

  cout << result;

  return 0;
}