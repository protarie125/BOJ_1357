#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int rev(int x) {
	auto s1 = to_string(x);
	reverse(s1.begin(), s1.end());
	auto iss = istringstream{ s1 };
	int ans;
	iss >> ans;

	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b; cin >> a >> b;
	cout << rev(rev(a) + rev(b));

	return 0;
}