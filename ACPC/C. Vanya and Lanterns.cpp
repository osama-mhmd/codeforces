#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  double l;
  cin >> n >> l;

  vector<double> positions(n);
  for (int i = 0; i < n; i++)
  {
    cin >> positions[i];
  }

  sort(positions.begin(), positions.end());

  double max_gap = 0;
  for (int i = 1; i < n; i++)
  {
    max_gap = max(max_gap, positions[i] - positions[i - 1]);
  }

  double required_radius = max(max_gap / 2, max(positions[0], l - positions[n - 1]));

  cout.precision(10);
  cout << required_radius << endl;

  return 0;
}
