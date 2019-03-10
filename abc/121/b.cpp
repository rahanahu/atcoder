#include<iostream>
#include<vector>
#include<cmath>
#include <algorithm>

using namespace std;

int main() {

	int N, M, C;
	cin >> N >>M >> C;

	vector<vector<int>> A;
	vector<int> Ai;
	vector<int> Bs;
	vector<int>anss;
	int result = 0;
	A.resize(N);
	Ai.resize(M,0);
	Bs.resize(M);
	anss.resize(N,0);
	for (auto i = 0; i < M; i++) {
		cin >> Bs[i];
	}


	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < M; j++) {
			int temp;
			cin >> temp;
			anss[i] += temp * Bs[j];
		}
		anss[i] += C;
		if (anss[i] > 0)result += 1;
	}


	cout << result << endl;


	return 0;
}