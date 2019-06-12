#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<utility>
#include<array>
#include<set>
#define EPS (1e-7)
using namespace std;






int main() {


	long long X, Y, ans = 1;
	cin >> X >> Y;

	while (true) {
		X = X * 2;
		if (X <= Y) {
			ans += 1;
		}
		else {
			break;
		}
	}



	cout << ans << endl;
	return 0;
}