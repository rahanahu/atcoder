#include<iostream>
#include<vector>

using namespace std;


int main() {

	int N;
	cin >> N;
	vector<int> A;

	A.resize(N);
	int min = 10000000000;
	int premin = 10000000000;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		if (min > A[i]) {
			min = A[i];
		}
	}
	int finisher = 10000000000;
	while (min != premin) {

		premin = min;
		int tempmin = 10000000000;
		for (int i = 0; i < N; i++) {
			int remainder = A[i] % min;
			if (remainder != 0)A[i] = remainder;
			if (min > A[i]) tempmin = A[i];
		}
		if (tempmin == finisher)break;
		min = tempmin;

	}

	cout << min << endl;

	return 0;
}