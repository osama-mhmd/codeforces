#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, q;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	sort(x, x + n);
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int m;
		cin >> m;

		int count = upper_bound(x, x + n, m) - x;
		cout << count << endl;
	}
	return 0;
}
