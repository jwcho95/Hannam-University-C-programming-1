//#include <stdio.h>
//
//int get_tax(int income);
//
//int main(void)
//{
//	int input_n;
//	printf("�ҵ��� �Է��Ͻÿ�(����): ");
//	scanf_s("%d", &input_n);
//
//	printf("�ҵ漼�� %d�Դϴ�.", get_tax(input_n));
//	
//	return 0;
//}
//
//int get_tax(int income) // �ҵ漼�� ���ϴ� �Լ�
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