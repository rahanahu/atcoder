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


	string S;
	long long K;
	long long current = 0, prec = 0;
	int ans;
	cin >> S >> K;
	vector<pair<long long, long long>> L(S.size());

	for (auto i = 0; i < S.size(); i++)
	{
		L[i] = make_pair(S[i] - 48, 1);
	}
	if (K == 1) {
		cout << L[0].first << endl;
		return 0;
	};

	for (auto j = 0; j < S.size(); j++)
	{

		if (L[j].first == 1) {
			if (current >= K - 1) {
				cout << L[j].first << endl;
				return 0;
			}
			current += 1;
		}
		else {
			for (auto i = 0; i < 5000000000000000; i++)
			{
				L[j].second = L[j].first*L[j].second;
				if (prec + L[j].second >= K - 1) {
					cout << L[j].first << endl;
					return 0;
				}
			}
			current += L[j].second;
		}
		prec = current;
	}



	return 0;
}