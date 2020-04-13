#include <stdio.h>
#include <Windows.h>

int main()
{
	char bell = '\a';

	printf("%c", bell);
	Sleep(1000);
	printf("화재가 발생하였습니다.");
	Sleep(1000);
	printf("%c", bell);

	return 0;
}