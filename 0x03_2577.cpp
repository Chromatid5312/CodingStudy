//C++, STL 풀이
//백준 2577번
/*
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

vector<int> number(11);
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int A, B, C;

	cin >> A >> B >> C;

	int multiple = A * B * C;
	while(multiple != 0) {
		number[multiple % 10]++;

		multiple /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << number[i] << '\n';
	}
}
*/
