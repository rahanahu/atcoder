#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#define EPS (1e-7)
using namespace std;




int main() {

	int N;
	cin >> N;
	int a;
	int ans = 0;
	for (size_t i = 0; i < N; i++)
	{
		cin >> a;
		while (true) {
			if (a % 2 == 0) {
				a = a / 2;
				ans += 1;
			}
			else {
				break;
			}
		}
	}
	cout << ans << endl;

	return 0;
}