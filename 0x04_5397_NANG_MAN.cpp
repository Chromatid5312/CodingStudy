//c�� Ȱ���� ���� Ǯ��
/*
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//�׽�Ʈ���̽� ����
	int testcase;
	scanf("%d ", &testcase);

	while (testcase--) { // 0 �Ǹ� ����
		//���Ḯ��Ʈ
		list<char> L = {};
		char init;
		auto cursor = L.begin();

		while ((init = getchar()) != '\n') {
			if (init == '<') {
				if (cursor != L.begin()) cursor--;
			}

			else if (init == '>') {
				if (cursor != L.end()) cursor++;
			}

			else if (init == '-') {
				if (cursor != L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
			}

			else {
				L.insert(cursor, init);
			}
		}
		for (auto i : L)
			printf("%c", i);
		printf("\n");
	}
}
*/