//#include <stdio.h>
//
//int factorial(int n);
//
//int main(void)
//{
//	int input_n, input_r, result;
//	printf("n�� ��:\t");
//	scanf_s("%d", &input_n);
//	printf("r�� ��:\t");
//	scanf_s("%d", &input_r);
//
//	result = factorial(input_n) / factorial(input_n - input_r);
//	printf("������ ���� %d�Դϴ�.", result);
//
//	return 0;
//}
//
//int factorial(int n) // ���丮���� ���ϴ� �Լ�
//{
//	if (n == 0)
//		n = 1;
//	for (int i = n; i >= 2; i--)
//	{
//		n = n * (i - 1);
//	}
//	return n;
//}