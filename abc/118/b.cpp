#include<iostream>
#include<vector>

using namespace std;


int main() {

	int N, M;
	int result = 0;
	cin >> N >> M;
	vector<int> foods(M, 0);

	for (int i = 0; i < N; i++) {
		int K, tempfood;
		cin >> K;

		for (int j = 0; j < K; j++) {
			cin >> tempfood;
			foods[tempfood - 1] += 1;
		}
	}

	for (auto i = 0; i < M; i++) {
		if (foods[i] == N)result += 1;

	}

	cout << result << endl;
	


	return 0;
}