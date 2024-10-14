#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short n, neighbores = 0;
  string stones;

  cin >> n >> stones;

  char prev_char = stones[0];

  for (int i = 1; i < n; i++)
  {
    char curr_char = stones[i];
    if (curr_char == prev_char)
    {
      neighbores++;
    }
    prev_char = curr_char;
  }

  cout << neighbores;

  return 0;
}