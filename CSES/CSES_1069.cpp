#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);

	std::string s; std::cin >> s;
	int res = 0, curMax = 1;
	for (unsigned long long i = 0; i < s.size() - 1; ++i) {
		if (s[i] == s[i+1]) curMax++;
		else {
			res = std::max(curMax, res);
			curMax = 1;
		}
	}
	std::cout << std::max(res, curMax) << '\n';

	return 0;
}