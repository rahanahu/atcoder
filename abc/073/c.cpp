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

	int N, ans = 0;
	cin >> N;
	set<int> a;
	int tempa;


	for (size_t i = 0; i < N; i++)
	{
		cin >> tempa;
		auto key = a.find(tempa);
		if (key == a.end()) {
			a.insert(tempa);
		}
		else {
			a.erase(key);
		}
	}

	ans = a.size();


	cout << ans << endl;

	return 0;
}