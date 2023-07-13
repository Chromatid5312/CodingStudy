//백준 10808번
/*
#include <stdio.h>
#include <string.h>
#define SIZE 100

char alphabet[SIZE] = "abcdefghijklmnopqrstuvwxyz";
int alpha[SIZE];

int main()
{
	char sen[SIZE];

	scanf("%s", sen);

	for (int i = 0; i < strlen(alphabet); i++) {
		alpha[i] = 0;
	}

	for (int i = 0; sen[i] != '\0'; i++)
	{
		for (int j = 0; alphabet[j] != '\0'; j++) {
			if (sen[i] == alphabet[j]) {
				alpha[j]++;
			}
		}
	}

	for (int i = 0; i < strlen(alphabet); i++) {
		printf("%d ", alpha[i]);
	}
}
*/
//0x01강의 연습문제 재풀이
/*
#include <stdio.h>
#define SIZE 101

int func2(int arr[], int);

int num[SIZE];

int main()
{
	int arr[SIZE];
	int N;

	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", arr + i);
	}

	printf("func2(arr, %d) = %d", N, func2(arr, N));
}

int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		if (num[100 - arr[i]] == 1)
			return 1;
		num[arr[i]] = 1;
	}
	return 0;
}
*/
//백준 2577번
/*
#include <stdio.h>
#define SIZE 11

int num[SIZE];

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	int number = A * B * C;

	while (number > 0) {
		num[number % 10]++;

		number /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
}
*/
//백준 1475번
/*
#include <stdio.h>
#define SIZE 11

int num[SIZE];

int main()
{
	int N;

	scanf("%d", &N);

	while(N > 0)
	{
		num[N % 10]++;

		N = N / 10;
	}

	if (num[6] < num[9]) {
		int tem = num[9];
		num[9] = num[6];
		num[6] = tem;
	}

	if (num[6] != num[9]) {
		if ((num[6] + num[9]) % 2 == 0) {
			num[6] = (num[6] + num[9]) / 2;
			num[9] = num[6];
		}
		else if ((num[6] - num[9]) % 2 == 0) {
			num[6] = num[6] - (num[6] - num[9]) / 2;
			num[9] = num[6];
		}
		else if ((num[6] - num[9]) > 1) {
			num[6] = num[9] + (num[6] - num[9]) / 2 + 1;
			num[9] = num[6];
		}
	}

	int MAX = num[0];

	for (int i = 1; i < 10; i++) {
		if (num[i] > MAX)
			MAX = num[i];
	}

	printf("%d", MAX);
}
*/
//백준 3273번 -> 해결 실패
/*
#include <stdio.h>

long long num[3000001];

int main()
{
	int arr[200001];
	long long N;
	long long x;

	scanf("%lld", &N);

	for (long long i = 0; i < N; i++) {
		scanf("%d", arr + i);
	}

	scanf("%lld", &x);

	long long number = 0;

	for (long long i = 0; i < N; i++) {
		if (num[x - arr[i]] == 1 && x - arr[i] > 0)
			number++;
		if (x - arr[i] > 0)
			num[arr[i]] = 1;
	}

	printf("%lld", number);
}
*/

