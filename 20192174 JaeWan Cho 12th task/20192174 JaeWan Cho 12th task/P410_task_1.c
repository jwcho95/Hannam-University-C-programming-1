//#include <stdio.h>
//
//int calculate(int a, char b, int c);
//int result; // ������ ��� ���� �����Ѵ�.
//
//int main(void)
//{
//	int input_n1, input_n2, cal_result;
//	char select;
//	while (1)
//	{
//		printf("������ �Է��Ͻÿ�: ");
//		scanf_s("%d %c %d", &input_n1, &select, 2, &input_n2);
//		cal_result = calculate(input_n1, select, input_n2);
//		printf("���� ���: %d\n", cal_result);
//	}
//
//	return 0;
//}
//
//int calculate(int a, char b, int c) // ���⿡ �ش��ϴ� �Լ�
//{
//	result = a;
//	static int sum; // ���� ���� ������ ���� Ƚ���� ī��Ʈ�Ѵ�.
//	static int min;
//	static int mul;
//	static int div;
//
//	if (b == '+')
//	{
//		sum++;
//		result  += c;
//		printf("������ �� %d�� ����Ǿ����ϴ�.\n", sum);
//	}
//	else if (b == '-')
//	{
//		min++;
//		result  -= c;
//		printf("������ �� %d�� ����Ǿ����ϴ�.\n", min);
//	}
//	else if (b == '*')
//	{
//		mul++;
//		result  *= c;
//		printf("������ �� %d�� ����Ǿ����ϴ�.\n", mul);
//	}
//	else
//	{
//		div++;
//		result  /= c;
//		printf("�������� �� %d�� ����Ǿ����ϴ�.\n", div);
//	}
//
//	return result;
//}