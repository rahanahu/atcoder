#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include <utility>

using namespace std;

int main() {

	vector<int> N(5, 0);
	vector<int> ans(10, 0);
	
	for (auto i = 0; i < 5; i++) {
		cin >> N[i];
	}
	int a, b;
	a = N[0] + N[3] + N[4];
	b = N[1] + N[2] + N[4];


	cout << max(a, b) << endl;


	return 0;
}