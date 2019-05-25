#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include <utility>

using namespace std;


int main() {

	int x, r, D;
	cin >> r >> D >> x;

	for (auto i = 0; i < 10; i++) {
		x = r * x - D;
		cout << x << endl;
	}



	return 0;
}