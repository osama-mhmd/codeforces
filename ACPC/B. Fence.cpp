#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int h[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  int current_sum = 0;
  for (int i = 0; i < k; i++) {
    current_sum += h[i];
  }
  int min_sum = current_sum;
  int index = 0;
  for (int i = k; i < n; i++) {
    current_sum += h[i] - h[i - k];
    if (min_sum > current_sum) {
      min_sum = current_sum;
      index = i - (k - 1);
    }
  }
  cout << index + 1 << endl;
  return 0;
}
