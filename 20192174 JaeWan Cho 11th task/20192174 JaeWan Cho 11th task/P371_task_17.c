//#include <stdio.h>
//
//int f_equal(double a, double b); // 근사적인지 확인하는 함수
//double f_abs(double x); // 절댓값을 구하는 함수
//double f_min(double a, double b); // 두 수 중 작은 수를 구하는 함수
//
//int main(void)
//{
//	double input_n1, input_n2;
//	
//	printf("실수를 입력하시오: ");
//	scanf_s("%lf", &input_n1);
//	printf("실수를 입력하시오: ");
//	scanf_s("%lf", &input_n2);
//
//	if (f_equal(input_n1, input_n2) == 1)
//		printf("두 개의 실수는 근사적으로 같다.");
//	else
//		printf("두 개의 실수는 서로 다르다.");
//
//	return 0;
//}
//
//int f_equal(double a, double b)
//{
//	double result;
//	double e = 1e-6; // e = 0.000001
//
//	result = f_abs(a - b) / f_min(f_abs(a), f_abs(b)); // 근사적으로 같은지 확인
//
//	if (result < e)
//		return 1;
//	else
//		return 0;
//}
//
//double f_abs(double x) // 절댓값 구하는 함수
//{
//	double y;
//
//	if (x < 0)
//		y = x * (-1);
//	else
//		y = x;
//
//	return y;
//}
//
//double f_min(double a, double b) // 작은 값 구하는 함수
//{
//	double c;
//
//	if (a > b)
//		c = b;
//	else
//		c = a;
//
//	return c;
//}