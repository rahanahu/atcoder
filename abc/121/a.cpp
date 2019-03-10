#include<iostream>
#include<vector>
using namespace std;

int main() {
	int H, W, h, w;

	int ans;

	cin >> H >> W >> h >> w;

	ans = H*W - (h * W+w*(H - h));

	cout << ans << endl;

	return 0;
}