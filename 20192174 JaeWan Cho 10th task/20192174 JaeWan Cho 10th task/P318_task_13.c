//#include <stdio.h>
//
//int factorial(int n);
//
//int main(void)
//{
//	int input_n, input_r, result;
//	printf("n의 값:\t");
//	scanf_s("%d", &input_n);
//	printf("r의 값:\t");
//	scanf_s("%d", &input_r);
//
//	result = factorial(input_n) / factorial(input_n - input_r);
//	printf("순열의 값은 %d입니다.", result);
//
//	return 0;
//}
//
//int factorial(int n) // 팩토리얼을 구하는 함수
//{
//	if (n == 0)
//		n = 1;
//	for (int i = n; i >= 2; i--)
//	{
//		n = n * (i - 1);
//	}
//	return n;
//}