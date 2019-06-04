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

	int A, B, C, X, Y;
	int ans = 0;
	cin >> A >> B >> C >> X >> Y;
	pair<int, int> pa, pb;
	pa.first = A;
	pa.second = X;
	pb.first = B;
	pb.second = Y;


	//if (2 * C > A && 2 * C > B) {
	if (2 * C > A + B) {
		ans = A * X + B * Y;
	}
	else {
		if (2 * C < A && 2 * C < B) {
			ans = max(X, Y) * 2 * C;
		}
		else if (B > A) {
			ans = 2 * C*Y;
			if (X - Y > 0)ans += (X - Y)*A;
		}
		else {
			ans = 2 * C*X;
			if (Y - X > 0)ans += (Y - X)*B;
		}
	}


	cout << ans << endl;


	return 0;
}