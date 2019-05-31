#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#define EPS (1e-7)
using namespace std;




int main() {

	int N;
	cin >> N;
	vector<int> a;
	a.resize(N);
	int mx = -1000;
	int mn = 1000;
	int ans = 1000000000;
	
	for (auto i = 0; i < N; i++) {
		cin >> a[i];
		mx = max(a[i], mx);
		mn = min(a[i], mn);
	}
	vector<int> cost(mx - mn + 1, 0);


	for (auto i = mn; i < mx + 1; i++) {
		for (auto j = 0; j < N; j++) {
			cost[i-mn] += abs(i - a[j])*abs(i - a[j]);
		}

	}

	for (auto i = 0; i < mx-mn+1; i++) {
		ans = min(ans, cost[i]);
	}


	cout << ans << endl;


	return 0;
}