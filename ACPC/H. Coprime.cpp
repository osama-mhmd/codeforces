#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long int li;

int gcd(li a, li b)
{
  if (b == 0)
  {
    return a;
  }

  return gcd(b, a % b);
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    li n;
    cin >> n;
    int x[n];
    li j = n;

    for (li i = 0; i < n; i++)
    {
      cin >> x[i];
    }

    for (li i = n; i >= 0; i--)
    {
      if (i == 0)
      {
        cout << -1 << endl;
        break;
      }

      int result = gcd(x[i - 1], x[j - 1]);

      if (result == 1)
      {
        cout << i + j << endl;
        break;
      }
    }
  }

  return 0;
}