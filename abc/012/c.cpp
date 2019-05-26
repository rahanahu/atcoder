#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include <utility>

using namespace std;

int main() {

	int sum = 2025;
	int ans = 0;
	int dif;
	int  N;
	vector<int> list(9, 0);
	cin >> N;

	dif = sum - N;

	for (auto i = 1; i < 10; i++) {
		if (dif%i == 0) {
			list[i - 1] = 1;
		}
	}


	for (auto i = 0; i < 9; i++) {
		if (list[i] == 1 && (dif / (i + 1)< 10 && dif / (i + 1) >0)) {
			cout << i + 1 << " x " << dif / (i + 1) << endl;
		}

	}


	return 0;
}