//#include <stdio.h>
//
//void is_prime(int x);
//
//int main(void)
//{
//	for (int i = 2; i < 101; i++)
//	{
//		is_prime(i); // is_prime �Լ��� 2���� 100������ ���� ���ʷ� �����Ѵ�.
//	}
//
//	return 0;
//}
//
//void is_prime(int x) // �Ҽ��� �Ǻ����ִ� �Լ�
//{
//	int num = 0;
//	int count = 0;
//
//	while (num < x)
//	{
//		num++;
//		if (x % num == 0)
//			count += 1;
//	}
//	if (count < 3)
//		printf("%d ", x);
//}