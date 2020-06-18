//#include <stdio.h>
//
//int sum_n(int x); // n까지의 합을 구하는 함수
//
//int main(void)
//{
//	int input_n;
//	
//	printf("정수를 입력하시오: ");
//	scanf_s("%d", &input_n);
//	printf("1부터 %d까지의 합 = %d", input_n, sum_n(input_n));
//
//	return 0;
//}
//
//int sum_n(int x)
//{
//	int result;
//	if (x == 1)
//		return 1;
//	else
//	{
//		result = x + sum_n(x - 1); // 순환호출을 이용함
//		return result;
//	}
//}