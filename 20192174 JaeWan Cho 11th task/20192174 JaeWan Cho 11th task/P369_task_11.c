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
//	for (int i = 0; i < 5; i++) // 5번 호출하기 위해 for문을 이용한다.
//	{
//		printf("%lf ",f_rand());
//	}
//
//	return 0;
//}
//
//double f_rand(void) // 0 또는 1을 무작위로 반환하는 함수
//{
//	double result;
//
//	result = rand() / (double) RAND_MAX; // RAND_MAX는 rand 함수의 최댓값이기에 result 값은 최대 1이다.
//
//	return result;
//}