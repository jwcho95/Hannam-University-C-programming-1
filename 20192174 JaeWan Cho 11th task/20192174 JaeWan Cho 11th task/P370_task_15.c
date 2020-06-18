//#include <stdio.h>
//
//void is_prime(int x);
//
//int main(void)
//{
//	for (int i = 2; i < 101; i++)
//	{
//		is_prime(i); // is_prime 함수에 2부터 100까지의 수를 차례로 대입한다.
//	}
//
//	return 0;
//}
//
//void is_prime(int x) // 소수를 판별해주는 함수
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