#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#include<array>
#include<set>
#define EPS (1e-7)
using namespace std;




int main() {

	string S;
	char c, op;
	int num = 0, ans = 0;
	cin >> S;
	vector<string>  nums(S.size(), "");
	int sikisize = 0;
	for (auto i = 0; i < S.size(); i++)
	{
		while (true) {
			if (i == S.size() - 1) {
				nums[sikisize] += S[i];
				break;
			}
			if (S[i] == '+')break;
			nums[sikisize] += S[i];
			i++;

		}
		sikisize++;

	}

	for (auto i = 0; i < sikisize; i++)
	{
		auto pos = nums[i].find("0");
		if (pos == string::npos)ans += 1;
	}

	cout << ans << endl;
	return 0;
}