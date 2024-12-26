#include <bits/stdc++.h>
#include <vector>
#include <map>

typedef long long ll;

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, m;
    cin >> n >> m;

    if (n % m == 0)
    {
      cout << 0 << endl;
      continue;
    }
    if (m % 2 == 1)
    {
      cout << -1 << endl;
      continue;
    }

    // At this point, we have "even m", and "n" not equal to "m" or a multiple of it
    // So, we guranteeted that it's possible to divide, and get operatinos

    int operations = 0;

    while (n % m != 0)
    {
      operations += n % m;
      n = n + n % m;
    }

    cout << operations << endl;
  }

  return 0;
}