//���� 1406��
/*
//STL ����
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	//�ð� �ʰ� ����
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string init;
	cin >> init;

	list<char> L;
	for (auto c : init) L.push_back(c);
	auto cusor = L.end();

	int q;
	cin >> q;

	while (q--) {
		char op;
		cin >> op;

		if (op == 'P') {
			char add;
			cin >> add;
			L.insert(cusor, add);
		}
		else if (op == 'B') {
			if (cusor != L.begin()) {
				cusor--;
				cusor = L.erase(cusor);
			}
		}
		else if (op == 'D') {
			if (cusor != L.end()) 
				cusor++;
		}
		else if (op == 'L') {
			if (cusor != L.begin()) 
				cusor--;
		}
	}
	for (auto c : L)
		cout << c;
}
*/