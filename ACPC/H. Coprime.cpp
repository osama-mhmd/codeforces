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
    li mx = 0;

    for (li i = 1; i <= n; i++)
    {
      cin >> x[i - 1];

      for (li j = 1; j <= i; j++) {
	if (gcd(x[j - 1], x[i - 1]) == 1) {
	  mx = max(mx, j + i);
	}
      }
    }

    if (mx) cout << mx << endl;
    else cout << -1 << endl;
  }

  return 0;
}
