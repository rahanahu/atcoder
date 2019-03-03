#include<iostream>
#include<vector>
#include<cmath>
#include <algorithm>

using namespace std;

int main() {

	int A, B, K;
	cin >> A >> B >> K;

	int big, small;

	vector<int> dividers, common_dividers;
	dividers.reserve(100);
	common_dividers.reserve(100);
	if (A > B) {
		big = A;
		small = B;
	}
	else {
		big = B;
		small = A;
	}
	
	int max_divider = sqrt(small);

	for (int i = 1; i <= max_divider; i++) {
		if (small%i == 0) {
			dividers.push_back(i);
			if (small / i != i)dividers.push_back(small / i);
		}
	}
	sort(dividers.begin(), dividers.end());

	for (int i = 0; i < dividers.size(); i++) {
		if (big % dividers[i] == 0) {
			common_dividers.push_back(dividers[i]);
		}
	}

	cout << common_dividers[common_dividers.size() - K] << endl;

	return 0;
}