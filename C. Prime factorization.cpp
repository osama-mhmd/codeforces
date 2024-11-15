#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> primeFactors(int n)
{
  vector<int> primes;

  while (n % 2 == 0)
  {
    primes.push_back(2);
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2)
  {
    // While i divides n, print i and divide n
    while (n % i == 0)
    {
      primes.push_back(i);
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2)
    primes.push_back(n);

  return primes;
}

int main()
{
  int n;

  cin >> n;

  vector<int> primes = primeFactors(n);

  for (int i = 0; i < primes.size(); i++)
  {
    if (i == primes.size() - 1)
      cout << primes.at(i);
    else
      cout << primes.at(i) << "*";
  }

  return 0;
}