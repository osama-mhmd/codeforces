#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  ll n, x;
  cin >> n >> x;
  vector<pair<ll,ll>> v(n);
  for (ll i = 0; i < n; i++) {
    ll val;
    cin >> val;
    v[i] = {val, i + 1};
  }
  sort(v.begin(), v.end());
  ll l = 0, r = n - 1;
  while (l < r) {
    ll sum = v[l].first + v[r].first;

    if (sum == x) {
      cout << v[l].second << " " << v[r].second << endl;
      return 0;
    } else if (sum > x) {
      r--;
    } else {
      l++;
    }
  }
  cout << -1 << endl;
  return 0;
}
