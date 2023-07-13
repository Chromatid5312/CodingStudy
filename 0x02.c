//공백 포함 문자열 받기
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
//백준 10871번
/*
#include <stdio.h>
#define SIZE 100000

int main()
{
	int N; //수열 A를 이루는 정수 개수
	int X; //X보다 작은 정수 출력 목적

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
//백준 1000번
#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A + B);
}
*/