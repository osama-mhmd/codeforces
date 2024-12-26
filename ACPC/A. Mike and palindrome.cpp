#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  deque<char> d;
  for (int i = 0; i < s.length(); i++) {
    d.push_back(s[i]);
  }
  int changes = 0;
  for (int i = 0; i < s.size() / 2; i++) {
    if (d.front() != d.back()) {
      changes++;
    }
    d.pop_front();
    d.pop_back();
  }
  if (s.size() == 1) changes++;
  cout << (changes == 1 ? "YES" : "NO") << endl;
  return 0;
}
