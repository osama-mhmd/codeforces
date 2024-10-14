#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int int1, int2, sum;
  string int1_e0, int2_e0, sum_e0;

  cin >> int1 >> int2;

  sum = int1 + int2;

  for (char i : to_string(int1))
  {
    if (i != '0')
      int1_e0 += i;
  }

  for (char i : to_string(int2))
  {
    if (i != '0')
      int2_e0 += i;
  }

  for (char i : to_string(sum))
  {
    if (i != '0')
      sum_e0 += i;
  }

  int temp_sum = stoi(int1_e0) + stoi(int2_e0);

  if (stoi(sum_e0) == temp_sum)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}