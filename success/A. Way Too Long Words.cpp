#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  short input;

  cin >> input;

  for (int i = 0; i < input; i++)
  {
    string word;
    cin >> word;

    if (word.length() > 10)
    {
      cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
    }
    else
    {
      cout << word << endl;
    }
  }

  return 0;
}