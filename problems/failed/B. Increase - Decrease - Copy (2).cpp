#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using li = long long;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    short n;

    cin >> n;

    li a[n], b[n + 1];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
      cin >> b[i];
    }

    li operations_in_last_digit = 1e16, operations = 0;

    for (int i = 0; i < n; i++)
    {
      operations += abs(a[i] - b[i]);

      operations_in_last_digit = min(operations_in_last_digit, abs(a[i] - b[n]));
      operations_in_last_digit = min(operations_in_last_digit, abs(b[i] - b[n]));

      if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
        operations_in_last_digit = 0;
    }

    cout << operations + operations_in_last_digit + 1 << endl;
  }

  return 0;
}

// WHY
// Error in data types