#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include <utility>

using namespace std;

int main() {

	int M, N;
	cin >> N >> M;

	vector<pair<int,int>> price_list;
	//vector<long long> howmuch;
	price_list.resize(N);
	
	for (auto i = 0; i < N; i++) {
		pair<int, int> temp;
		scanf_s("%d %d", &temp.first, &temp.second);
		price_list[i] = temp;
		
	}

	sort(price_list.begin(), price_list.end());


	int num = 0;
	long long ans = 0;
	for (auto store = 0; store < N; store++) {
		num += price_list[store].second;
		if (num > M) {
			num -= price_list[store].second;
			ans += (long long)price_list[store].first * (long long)(M - num);
			break;
		}
		else {
			ans += (long long)price_list[store].first * (long long)price_list[store].second;
		}

	}
	cout << ans << endl;

	return 0;
}