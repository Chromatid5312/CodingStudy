//�ð�, �������⵵ ����1
//���� �� 3 Ȥ�� 5�� ������ �������� �� ���ϱ�
/*
#include <stdio.h>

int func1(int);

int main()
{
	int num;
	scanf("%d", &num);

	printf("func1(%d) = %d", num, func1(num));
}

int func1(int num)
{
	int number = 0;

	for (int i = 3; i <= num; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			number += i;
		}
	}

	return number;
}
*/
//�ð�, �������⵵ ����2
//�迭 �� ���� 100�� �Ǵ� �� ���� �����ϴ��� �Ǻ�
/*
#include <stdio.h>
#define SIZE 100

int func2(int arr[], int);

int main()
{
	int arr[SIZE];

	int N;

	printf("�迭 ũ�� : ");
	scanf("%d", &N);

	printf("�迭 ���ڵ� : ");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	printf("func2({");
	for (int i = 0; i < N - 1; i++)
		printf("%d,", arr[i]);
	printf("%d}, %d) = %d", arr[N - 1], N, func2(arr, N));
}

int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100) {
				return 1;
			}
		}
	}

	return 0;
}
*/

//�ð�, �������⵵ ����3
//�־��� ���� ���������� �Ǵ��ϱ�
/*
#include <stdio.h>

int func3(int);

int main()
{
	int num;
	scanf("%d", &num);

	printf("func3(%d) = %d", num, func3(num));
}

int func3(int num) {
	for (int i = 2; i < num; i++) {
		if (num == i * i) {
			return 1;
		}

		if (num <= i * 2);
		{
			break;
		}
	}
	return 0;
}
*/
//�ð�, �������⵵ ����4
//N ���� �� �� ���� ū 2�� �ŵ������� ��ȯ
/*
#include <stdio.h>

int func4(int N);

int main()
{
	int N;
	scanf("%d", &N);

	printf("func4(%d) = %d", N, func4(N));
}

int func4(int N)
{
	int number = N;

	int sam = N;

	for (int i = N; i >= 1; i--) { //2�� 0������(=1) ~ N ����
		while (sam % 2 != 1) {
			sam /= 2;
		}

		if (sam == 1) {
			break;
		}

		number--;
		sam = number;
	}

	return number;
}
*/
//�ð�, �������⵵ ����4 (�ٸ� Ǯ��)
//N ���� �� �� ���� ū 2�� �ŵ������� ��ȯ
/*
#include <stdio.h>

int func4(int N);

int main()
{
	int N;
	scanf("%d", &N);

	printf("func4(%d) = %d", N, func4(N));
}

int func4(int N)
{
	int val = 1;

	while (val * 2 <= N) {
		val *= 2;
	}

	return val;
}
*/