//���� 5397��
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

	//�׽�Ʈ���̽� ����
	int testcase;
	cin >> testcase;

	while (testcase--) { // 0 �Ǹ� ����
		//���Ḯ��Ʈ
		list<char> L = {};
		string init;
		auto cursor = L.begin();

		cin >> init; // ���ڿ� �Է�

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
				//cursor++ -> �� �̰� �ƴ�?
			}
		}
		for (auto i : L)
			cout << i;
		cout << '\n';
	}
}
*/
