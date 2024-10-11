#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> getDivisors(int n)
{
  vector<int> divisors;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      divisors.push_back(i);
    }
  }
  return divisors;
}

// int main()
// {
//   int number;
//   std::cout << "Enter a number: ";
//   std::cin >> number;

//   std::vector<int> divisors = getDivisors(number);

//   std::cout << "Divisors of " << number << " are: ";
//   for (int d : divisors)
//   {
//     std::cout << d << " ";
//   }

//   return 0;
// }

int main()
{
  short upperLimit, result = 0;

  cin >> upperLimit;

  // 6 is the first almost prime number
  for (int i = 6; i <= upperLimit; i++)
  {
    vector<int> divisors = getDivisors(i);

    cout << divisors.size() << endl;

    if (divisors.size() == 2)
    {
      result++;
    }
  }

  cout << result;

  return 0;
}