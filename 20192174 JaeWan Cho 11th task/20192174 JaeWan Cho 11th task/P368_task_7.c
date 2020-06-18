//#include <stdio.h>
//
//int get_tax(int income);
//
//int main(void)
//{
//	int input_n;
//	printf("소득을 입력하시오(만원): ");
//	scanf_s("%d", &input_n);
//
//	printf("소득세는 %d입니다.", get_tax(input_n));
//	
//	return 0;
//}
//
//int get_tax(int income) // 소득세를 구하는 함수
//{
//	int result;
//
//	if (income > 1000)
//		result = (income - 1000) * 10 / 100 + 1000 * 8 / 100;
//	else
//		result = income * 8 / 100;
//
//	return result;
//}