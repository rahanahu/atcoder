#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#include<array>
#include<set>
#define EPS (1e-7)
using namespace std;




int main() {

	int N;
	cin >> N;
	vector<pair<int, int>> a(N);

	for (size_t i = 0; i < N; i++)
	{
		cin >> a[i].first;
		a[i].second = i + 1;
	}

	sort(a.begin(), a.end(), std::greater<pair<int, int>>());

	for (size_t i = 0; i < N; i++)
	{
		cout << a[i].second << endl;
	}


	return 0;
}