#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#define EPS (1e-7)
using namespace std;




int main() {

	int N, K;
	vector<int> h;

	cin >> N >> K;
	h.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}

	sort(h.begin(), h.end());

	int min_h = 1000000001;
	int ans;
	for (int i = 0; i <= N - K; i++) {
		int test = abs(h[i] - h[i + K - 1]);
		min_h = min(min_h, abs(h[i] - h[i + K - 1]));
	}

	cout << min_h << endl;

	return 0;
}