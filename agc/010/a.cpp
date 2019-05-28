#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>

using namespace std;




int main() {

	int count = 0;
	int N, A;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A;
		if (A % 2 == 1) {
			count += 1;
		}

	}

	if (count % 2 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}