//���� ���� ���ڿ� �ޱ�
/*
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char str[SIZE];

	scanf("%[^\n]s", str);

	printf("%s", str);
}
*/
//���� 10871��
/*
#include <stdio.h>
#define SIZE 100000

int main()
{
	int N; //���� A�� �̷�� ���� ����
	int X; //X���� ���� ���� ��� ����

	int A[SIZE];

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", A + i);
	}

	for (int i = 0; i < N; i++) {
		if (X > *(A + i))
			printf("%d ", *(A + i));
	}
}
*/
/*
//���� 1000��
#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A + B);
}
*/