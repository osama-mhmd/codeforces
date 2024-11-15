#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int sumOfDigits(ll num)
{
  int sum = 0;

  // Repeat until all digits are processed
  while (num != 0)
  {
    // Extract the last digit
    int digit = num % 10;

    // Add it to the sum
    sum += digit;

    // Remove the last digit
    num /= 10;
  }

  return sum;
}

ll gdc(ll a, ll b)
{
  if (b == 0)
  {
    return a;
  }

  return gdc(b, a % b);
}

ll gdcSum(ll a)
{
  int b = sumOfDigits(a);

  return gdc(a, b);
}

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    ll divisor = gdcSum(n);

    while (divisor < 2)
    {
      divisor = gdcSum(++n);
    }

    cout << n << endl;
  }

  return 0;
}