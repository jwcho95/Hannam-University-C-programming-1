//#include <stdio.h>
//
//int power(int base, int power_raised); // ���� ���� ����ϴ� �Լ�
//
//int main(void)
//{
//	int input_base, input_raised;
//	
//	printf("�ؼ�: ");
//	scanf_s("%d", &input_base);
//	printf("����: ");
//	scanf_s("%d", &input_raised);
//	printf("%d ^ %d = %d", input_base, input_raised, power(input_base, input_raised));
//	return 0;
//}
//
//int power(int base, int power_raised)
//{
//	int result;
//	
//	if (power_raised == 0)
//		return 1;
//	else
//	{
//		result = base * power(base, power_raised - 1);
//		return result;
//	}
//}