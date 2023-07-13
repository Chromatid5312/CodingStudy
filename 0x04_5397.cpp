//백준 5397번
/*
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//테스트케이스 개수
	int testcase;
	cin >> testcase;

	while (testcase--) { // 0 되면 종료
		//연결리스트
		list<char> L = {};
		string init;
		auto cursor = L.begin();

		cin >> init; // 문자열 입력

		for(auto c : init) {
			if (c == '<') {
				if (cursor != L.begin()) cursor--;
			}

			else if (c == '>') {
				if (cursor != L.end()) cursor++;
			}

			else if (c == '-') {
				if (cursor != L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
			}

			else {
				L.insert(cursor, c);
				//cursor++ -> 왜 이거 아님?
			}
		}
		for (auto i : L)
			cout << i;
		cout << '\n';
	}
}
*/
