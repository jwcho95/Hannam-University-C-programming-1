//#include <stdio.h>
//
//int f_equal(double a, double b); // �ٻ������� Ȯ���ϴ� �Լ�
//double f_abs(double x); // ������ ���ϴ� �Լ�
//double f_min(double a, double b); // �� �� �� ���� ���� ���ϴ� �Լ�
//
//int main(void)
//{
//	double input_n1, input_n2;
//	
//	printf("�Ǽ��� �Է��Ͻÿ�: ");
//	scanf_s("%lf", &input_n1);
//	printf("�Ǽ��� �Է��Ͻÿ�: ");
//	scanf_s("%lf", &input_n2);
//
//	if (f_equal(input_n1, input_n2) == 1)
//		printf("�� ���� �Ǽ��� �ٻ������� ����.");
//	else
//		printf("�� ���� �Ǽ��� ���� �ٸ���.");
//
//	return 0;
//}
//
//int f_equal(double a, double b)
//{
//	double result;
//	double e = 1e-6; // e = 0.000001
//
//	result = f_abs(a - b) / f_min(f_abs(a), f_abs(b)); // �ٻ������� ������ Ȯ��
//
//	if (result < e)
//		return 1;
//	else
//		return 0;
//}
//
//double f_abs(double x) // ���� ���ϴ� �Լ�
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
//double f_min(double a, double b) // ���� �� ���ϴ� �Լ�
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