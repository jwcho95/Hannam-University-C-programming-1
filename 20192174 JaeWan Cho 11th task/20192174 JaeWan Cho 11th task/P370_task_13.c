//#include <stdio.h>
//
//int is_multiple(int n, int m);
//
//int main(void)
//{
//	int input_n1, input_n2;
//	
//	printf("첫 번째 정수를 입력하시오: ");
//	scanf_s("%d", &input_n1);
//	printf("두 번째 정수를 입력하시오: ");
//	scanf_s("%d", &input_n2);
//
//	if (is_multiple(input_n1, input_n2) == 1) // 함수의 결과값이 1이면 배수라는 의미이다.
//		printf("%d은(는) %d의 배수입니다.", input_n1, input_n2);
//	else
//		printf("%d은(는) %d의 배수가 아닙니다.", input_n1, input_n2);
//
//	return 0;
//}
//
//int is_multiple(int n, int m) // 배수인지 아닌지 판별하는 함수
//{
//	int result;
//
//	if (n % m == 0)
//		result = 1;
//	else
//		result = 0;
//
//	return result;
//}