#include <iostream>
#include <vector>

typedef long long ll;

int main() {
	std::vector<ll> divisors;
	divisors.push_back(2);
	divisors.push_back(3);
	divisors.push_back(4);
	divisors.pop_back();
	for (ll i : divisors) {
		std::cout << "Divisor: " << i << std::endl;
	}
	return 0;
}
