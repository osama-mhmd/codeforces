#include <map>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
  if (b == 0)
  {
    return a;
  }

  return gcd(b, a % b);
}

int main() {
  long int t;
  cin >> t;

  while (t--) {
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> a;
    map<ll, bool> mp; // gcd : boolean

    if (r - l + 1 < n) {
      cout << "NO" << endl;
      continue;
    }

    ll index = 1;
    for (ll i = l; i <= r; i++) {
      ll gcdNum = gcd(index, i);

      if (!mp[gcdNum]) {
        a.push_back(i);
        index++;
        mp[gcdNum] = true;
      }
    }

    if (a.size() < n) {
      cout << "NO" << endl;
      continue;
    } 

    cout << "YES" << endl;
    for (ll i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
