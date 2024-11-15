#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

vector<ll> getDivisors(ll n) {
  vector<ll> divisors;
    ll x = 2;
    while (true) {
      ll y = n / x;

      if (n % x == 0 && y == 1) {
	divisors.push_back(x);
	break;
      } else if (n % x == 0 && y % x == 0) {
	divisors.push_back(x);
	divisors.push_back(y);
	break;
      } else { 
	x++;
      }

      cout << "Runtime: " << "Y: " << y << "X: " << x << endl;
    }

  return divisors;
}

int main()
{
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> a;
    a.push_back(n);
    while (true) {
      cout << "Runtime: " << a.back() << endl;
      vector<ll> divisors = getDivisors(a.back());

      if (divisors.size() == 1) break;

      a.pop_back();

      for (int i : divisors) a.push_back(i);
    }

    cout << a.size() << endl;
    for (int i : a) {
      cout << i << endl;
    }
  }
  return 0;
}
