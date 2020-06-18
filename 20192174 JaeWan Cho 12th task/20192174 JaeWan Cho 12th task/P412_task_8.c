//#include <stdio.h>
//
//int count_n(int x);
//
//int main(void)
//{
//	int input_n;
//	
//	printf("정수를 입력하시오: ");
//	scanf_s("%d", &input_n);
//	printf("자리수의 개수: %d", count_n(input_n));
//
//	return 0;
//}
//
//int count_n(int x)
//{
//	static int count;
//	int result;
//
//	if (x < 10)
//	{
//		count++;
//		return count;
//	}
//	else
//	{
//		count++;
//		result = count_n(x / 10);
//	}
//}