#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool isPrime(int num) {
  if (num <= 1) return false;
  if (num <= 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false;
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) return false;
  }
  return true;
}

int nextPrime(int num) {
  while(!isPrime(num)) {
    num++;
  }

  return num;
}

void solve() {
  int n, m;
  cin >> n >> m;

  int rows[n] = {0};
  int cols[m] = {0};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int num;
      cin >> num;

      int nextPrimeNumber = nextPrime(num);

      rows[i] += nextPrimeNumber - num;
      cols[j] += nextPrimeNumber - num;
    }
  }

  sort(rows, rows + n);
  sort(cols, cols + m);

  cout << min(rows[0], cols[0]);
}

int main() {
  solve();

  return 0;
}
