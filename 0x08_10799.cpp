//���� 10799��
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string mak; //����

	cin >> mak; //������� �� �� �Է�

	stack<char> makde; //��ȣ�� ������ ����

	int line = -1; //���� �Ǻ� ����
	int count = 0; //���� ���� ����

	for (auto i : mak) {
		switch (i)
		{
		case '(':
			makde.push(i);

			if (line < 0) line++;

			break;

		case ')':
			makde.pop();
			if (line == 0)
			{
				count += makde.size(); //�ٷ� ���� ���ڰ� '(' ����
				line = -1;
			}
			else count++;

			break;
		}
	}

	cout << count;
}
*/

