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


	long long N, M, ans = 0;
	cin >> N >> M;


	ans += min(N, M / 2);
	N -= ans;
	M -= 2 * ans;

	ans += M / 4;


	cout << ans << endl;

	return 0;
}