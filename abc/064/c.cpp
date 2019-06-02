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
	vector<int> a(9, 0);
	int tempa, ans = 0, mina;

	for (size_t i = 0; i < N; i++)
	{
		cin >> tempa;
		if (tempa >= 1 && tempa <= 399)a[0] += 1;
		else if (tempa >= 400 && tempa <= 799)a[1] += 1;
		else if (tempa >= 800 && tempa <= 1199)a[2] += 1;
		else if (tempa >= 1200 && tempa <= 1599)a[3] += 1;
		else if (tempa >= 1600 && tempa <= 1999)a[4] += 1;
		else if (tempa >= 2000 && tempa <= 2399)a[5] += 1;
		else if (tempa >= 2400 && tempa <= 2799)a[6] += 1;
		else if (tempa >= 2800 && tempa <= 3199)a[7] += 1;
		else if (tempa >= 3200)a[8] += 1;
	}

	for (size_t i = 0; i < 8; i++)
	{
		if (a[i] > 0) ans += 1;
	}
	mina = ans;

	ans += a[8];

	if (mina == 0) { mina = 1; }

	cout << mina << " " << ans << endl;

	return 0;
}