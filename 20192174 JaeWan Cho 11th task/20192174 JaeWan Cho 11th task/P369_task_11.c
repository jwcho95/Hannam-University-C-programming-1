//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//double f_rand(void);
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//
//	for (int i = 0; i < 5; i++) // 5�� ȣ���ϱ� ���� for���� �̿��Ѵ�.
//	{
//		printf("%lf ",f_rand());
//	}
//
//	return 0;
//}
//
//double f_rand(void) // 0 �Ǵ� 1�� �������� ��ȯ�ϴ� �Լ�
//{
//	double result;
//
//	result = rand() / (double) RAND_MAX; // RAND_MAX�� rand �Լ��� �ִ��̱⿡ result ���� �ִ� 1�̴�.
//
//	return result;
//}