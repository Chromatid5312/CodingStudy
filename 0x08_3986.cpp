//���� 3986��
/*
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin >> num; //�ܾ��� �� N

	string AB; //�ܾ�

	int count = 0;

	while (num--) {
		stack<char> N; //�� �ܾ ������ ����

		cin >> AB; //�ܾ� �Է�

		for (auto i : AB) {
			if (!N.empty() && N.top() == i) N.pop(); //���� N�� ������� �����鼭, N�� ���� �ܾ�� i�� ���ٸ� ��������
			else N.push(i); //�װ� �ƴ϶�� �߰��ϱ�
		}

		if (N.empty()) count++; //���� ������ ����ִٸ� 1 �߰�
	}

	cout << count;
}
*/
