//#include <stdio.h>
//
//int sum_n(int x); // n������ ���� ���ϴ� �Լ�
//
//int main(void)
//{
//	int input_n;
//	
//	printf("������ �Է��Ͻÿ�: ");
//	scanf_s("%d", &input_n);
//	printf("1���� %d������ �� = %d", input_n, sum_n(input_n));
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
//		result = x + sum_n(x - 1); // ��ȯȣ���� �̿���
//		return result;
//	}
//}