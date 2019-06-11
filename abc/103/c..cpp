#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<utility>
#include<array>
#include<set>
#define EPS (1e-7)
using namespace std;






int main() {


	int N, ans = 0;
	cin >> N;

	vector<int> a(N);

	for (auto i = 0; i < N; i++)
	{
		cin >> a[i];
		ans += a[i] - 1;
	}


	cout << ans << endl;


	return 0;
}