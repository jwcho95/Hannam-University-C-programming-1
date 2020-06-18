//#include <stdio.h>
//
//int show_digit(int x); // 정수의 각 자리수를 출력하는 함수
//
//int main(void)
//{
//	int input_n;
//	printf("정수를 입력하시오: ");
//	scanf_s("%d", &input_n);
//	show_digit(input_n);
//	return 0;
//}
//
//int show_digit(int x)
//{
//	int result;
//
//	if (x < 10)
//		printf("%d ", x);
//	else
//	{
//		result = show_digit(x / 10);
//		printf("%d ", x % 10);
//	}
//}