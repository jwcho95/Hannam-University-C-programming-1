//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void get_random(void);
//
//int main(void)
//{
//	get_random();
//	get_random();
//	get_random();
//
//	return 0;
//}
//
//void get_random(void)
//{
//	static int inited = 0;
//	int result;
//
//	if (inited == 0) // �ʱ�ȭ�� �����Ѵ�.
//	{
//		printf("�ʱ�ȭ ����\n");
//		srand((unsigned)time(NULL));
//		result = rand();
//		printf("%d\n", result);
//		inited = 1;
//	}
//	else // �̹� �ʱ�ȭ �Ǿ����Ƿ� �ٽ� �ʱ�ȭ���� �ʴ´�.
//	{
//		result = rand();
//		printf("%d\n", result);
//	}
//}