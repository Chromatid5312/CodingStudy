//���� 4949��
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string sen;

	while (1) { //�ݺ��� ����
		getline(cin, sen);  //������ ������ ���� �ޱ�

		if (sen == ".")
			break;

		bool check = true;
		stack<char> gar; //��ȣ�� ���� ����

		for (auto i : sen) {
			switch (i)
			{
				case '(':
					gar.push(i);
					break;
				case '[':
					gar.push(i);
					break;
				case ')':
					if (gar.empty() || gar.top() != '(') check = false;
					else gar.pop();
					break;
				case ']':
					if (gar.empty() || gar.top() != '[') check = false;
					else gar.pop();
					break;
			}
		}

		if (!gar.empty()) check = false;

		if (check) cout << "yes" << '\n';
		else cout << "no\n";
	}
}
*/