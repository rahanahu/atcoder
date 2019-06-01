#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#define EPS (1e-7)
using namespace std;




int main() {

	int N, T;
	cin >> N >> T;
	int t, pre_t = 0;
	int ans = 0;
	cin >> t;
	for (size_t i = 0; i < N - 1; i++)
	{
		cin >> t;

		if (T >= (t - pre_t)) {
			ans += (t - pre_t);
		}
		else {
			ans += T;
		}
		pre_t = t;
	}
	ans += T;






	cout << ans << endl;

	return 0;
}