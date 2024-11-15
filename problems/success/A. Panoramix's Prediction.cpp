#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
  bool result = true;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      result = false;
      break;
    }
  }

  return result;
}

int nextPrime(int n)
{
  int next = n + 1;
  while (!isPrime(next))
  {
    ++next;
  }
  return next;
}

int main()
{
  short prime1, prime2;

  cin >> prime1 >> prime2;

  if (nextPrime(prime1) == prime2)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}