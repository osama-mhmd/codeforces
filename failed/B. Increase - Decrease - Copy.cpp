/*
  MY SOLUTION IS NOT SICK, ONLY CHATGPT IS THE SICK ONE, HE SAYS MY APPROACH IS WRONG,
  AND I DIDN'T UNDERSTAND THE PROBLEM ???
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    short n, operations = 0;

    cin >> n;

    short a[n], b[n + 1];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
      cin >> b[i];
    }

    int operations_in_last_digit = 200000;

    for (int i = 0; i < n; i++)
    {
      operations += abs(a[i] - b[i]);
      short local_operations = abs(a[i] - b[n]) + 1;

      if (local_operations < operations_in_last_digit)
        operations_in_last_digit = local_operations;
    }

    cout << operations + operations_in_last_digit;
  }

  return 0;
}

// WHY
// Misunderstanding of the problem