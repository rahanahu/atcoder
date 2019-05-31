#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#define EPS (1e-7)
using namespace std;




int main() {

	int N, syo, amari;

	vector<int> ans{1,2,3,4,5,6};
	vector<int> preans;
	preans = ans;
	cin >> N;

	syo = N / 5;
	amari = N % 5;

	for (int i = 0; i < 6; i++) {
		ans[i] = preans[(i + syo) % 6 ];
	}

	for (int i = 0; i < amari; i++) {
		swap(ans[i], ans[i + 1]);

	}
	for (int i = 0; i < 6; i++) {
		cout << ans[i];

	}
	cout << endl;
	return 0;
}