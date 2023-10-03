#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	vector<string> lst{
		"Never gonna give you up",
		"Never gonna let you down",
		"Never gonna run around and desert you",
		"Never gonna make you cry",
		"Never gonna say goodbye",
		"Never gonna tell a lie and hurt you",
		"Never gonna stop"
	};

	int n;
	cin >> n;
	cin.ignore();

	auto ans = bool{ false };
	while (0 < (n--)) {
		string l;
		std::getline(cin, l);

		if (find(lst.begin(), lst.end(), l) == lst.end()) {
			ans = true;
			break;
		}
	}

	cout << (ans ? "Yes" : "No");

	return 0;
}