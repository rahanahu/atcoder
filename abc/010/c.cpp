#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#define EPS (1e-7)
using namespace std;

double dist2points(double x1, double x2, double y1, double y2) {
	double distance;

	distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

	return distance;
}



int main() {

	int txa, tya, txb, tyb, T, V, n;


	cin >> txa >> tya >> txb >> tyb >> T >> V >> n;

	int xi, yi;
	double load;
	string ans = "NO";
	for (auto i = 0; i < n; i++) {
		cin >> xi >> yi;

		load = dist2points(txa, xi, tya, yi) + dist2points(txb, xi, tyb, yi);

		if (V*T + EPS >= load) {
			ans = "YES";
			break;
		}

	}
	cout << ans << endl;

	return 0;
}