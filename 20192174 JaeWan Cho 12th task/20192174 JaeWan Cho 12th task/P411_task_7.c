//#include <stdio.h>
//
//int show_digit(int x); // ������ �� �ڸ����� ����ϴ� �Լ�
//
//int main(void)
//{
//	int input_n;
//	printf("������ �Է��Ͻÿ�: ");
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