//���� 1158
//�޸� �ʰ� ����

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, K;

	cin >> N >> K;

	cout << "<";

	//���Ḯ��Ʈ ����
	list<int> X;

	for (auto i = 1; i <= N; i++) {
		X.push_back(i); //1~N������ ���ڰ� �� ����Ʈ
	}

	int i = 0, count = 0;

	for (auto RS : X) {
		i++;

		if (i % K == 0) //���� ���ǿ� �´ٸ� ���
		{
			count++;
			cout << RS;
			if (count == N) break;
			else
				cout << ", ";
		}

		else //���� �������� ����Ʈ �ڷ� ���� ������
			X.push_back(RS);
	}

	cout << ">";
}