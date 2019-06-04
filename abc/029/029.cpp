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


void brute(int N, string s) {
	if (N == 0) {
		cout << s << endl;
	}
	else {
		for (char c = 'a'; c <= 'c'; c++) {
			brute(N - 1, s + c);
		}
	}


}



int main() {

	int N;
	cin >> N;

	brute(N, "");


	//cout << ans << endl;


	return 0;
}