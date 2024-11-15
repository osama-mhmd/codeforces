#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool isPrime(long long num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (long long i = 5; i * i <= num; i += 6) {
      if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}


int main() {
  ll n;
  cin >> n;

  while (n--) {
    ll x;
    cin >> x;

    ll root = sqrt(x);

    if (root * root == x && isPrime(root)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
