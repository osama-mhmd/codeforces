#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

void solve() {
  ll n;
  cin >> n;

  vector<pair<ll,ll>> v;

  for (ll i = 2; i*i <=n; i++) {
    int count = 0;

    while (n % i == 0) {
      n /= i;
      count++;
    }

    if (count > 0) v.push_back({count, i});
  }

  if (n > 1) v.push_back({1, n});

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  vector<ll> ans;

  for (int i = 0; i < v[0].first; i++) {
    ans.push_back(v[0].second);
  }
  for (int i = 1; i < (int)v.size(); i++) {
    for (int j = 0; j < v[i].first; j++) {
      ans[v[0].first - 1] *= v[i].second;
    }
  }

  cout << v[0].first << endl;

  for (auto i : ans) {
    cout << i << " ";
  }

  cout << "\n";
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
