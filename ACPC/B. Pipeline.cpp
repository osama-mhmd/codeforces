#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <sstream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <stdio.h>
#include <assert.h>
#include <memory.h>
#include <bitset>
using namespace std;

typedef long long ll;

ll sum(ll n)
{
  return (n * (n + 1)) / 2;
}

ll sum(ll s, ll e)
{
  if (s <= 1)
    return sum(e);

  return sum(e) - sum(s - 1);
}

ll minSplitters(ll k, ll n)
{
  ll st = 1, en = k;

  while (st < en)
  {
    ll md = (st + en) / 2;
    ll s = sum(md, k);

    if (s == n)
      return k - md + 1;

    if (s > n)
      st = md + 1;
    else
      en = md;
  }

  return k - st + 2;
}

int main()
{
  ll n, k;
  cin >> n >> k;
  if (n == 1)
    cout << 0 << "\n";
  else if (n <= k)
    cout << 1 << "\n";
  else
  {
    --k;
    --n;

    if (sum(k) < n)
      cout << -1 << "\n";
    else
      cout << minSplitters(k, n) << "\n";
  }
  return 0;
}