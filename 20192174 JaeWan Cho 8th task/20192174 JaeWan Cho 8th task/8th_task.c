#include <stdio.h>
#include <stdlib.h> // 난수 생성에 필요한 라이브러리
#include <time.h> // 시간에 관련된 라이브러리

int main()
{
	int answer;
	srand((unsigned)time(NULL)); // 시드값을 변화시킨다.
	int result = rand()%100 + 1; // 난수를 발생시킨다.

	do
	{
		printf("정답을 추측하여 보시오.: ");
		scanf_s("%d", &answer);
		if (answer < result)
			printf("입력하신 수가 정답보다 작습니다.\n");
		else if (answer > result)
			printf("입력하신 수가 정답보다 큽니다.\n");
	} while (answer != result);

	printf("축하합니다. 정답입니다!\n");
	return 0;
}