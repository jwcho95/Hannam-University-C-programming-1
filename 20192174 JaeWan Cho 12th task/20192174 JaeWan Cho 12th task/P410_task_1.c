//#include <stdio.h>
//
//int calculate(int a, char b, int c);
//int result; // 계산기의 결과 값을 저장한다.
//
//int main(void)
//{
//	int input_n1, input_n2, cal_result;
//	char select;
//	while (1)
//	{
//		printf("연산을 입력하시오: ");
//		scanf_s("%d %c %d", &input_n1, &select, 2, &input_n2);
//		cal_result = calculate(input_n1, select, input_n2);
//		printf("연산 결과: %d\n", cal_result);
//	}
//
//	return 0;
//}
//
//int calculate(int a, char b, int c) // 계산기에 해당하는 함수
//{
//	result = a;
//	static int sum; // 정적 지역 변수로 계산된 횟수를 카운트한다.
//	static int min;
//	static int mul;
//	static int div;
//
//	if (b == '+')
//	{
//		sum++;
//		result  += c;
//		printf("덧셈은 총 %d번 실행되었습니다.\n", sum);
//	}
//	else if (b == '-')
//	{
//		min++;
//		result  -= c;
//		printf("뺄셈은 총 %d번 실행되었습니다.\n", min);
//	}
//	else if (b == '*')
//	{
//		mul++;
//		result  *= c;
//		printf("곱셈은 총 %d번 실행되었습니다.\n", mul);
//	}
//	else
//	{
//		div++;
//		result  /= c;
//		printf("나눗셈은 총 %d번 실행되었습니다.\n", div);
//	}
//
//	return result;
//}