#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include <utility>

using namespace std;

int main() {
	int N, M, L, R;
	int ans = 0;
	cin >> N >> M;

	int min, max;

	cin >> min >> max;

	for (auto i = 0; i < M-1; i++) {
		cin >> L >> R;

		if (R<min | L> max) {
			cout << 0 << endl;
			return 0;
		}

		if (min <= L && max >= R) {
			min = L;
			max = R;
		}
		else if (L < min && R >= min && R < max) {
			max = R;
		}
		else if (R > max && L <= max && L > min) {
			min = L;
		}
		else if (L<min && R>max) {
			
		}


	}

	ans = max - min + 1;


	cout << ans << endl;
	return 0;
}