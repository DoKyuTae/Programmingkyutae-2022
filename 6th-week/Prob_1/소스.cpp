#include <stdio.h>
#include <string.h>                                        // strcmp 사용하기 위함

#define PASSWORLD "dokyu19"                                // 비밀번호 설정
#define SIZE 50                                            // 배열 크기 설정

int main(void)
{
	char mypass[] = { PASSWORLD };                        // 비밀번호 변수 설정
	char inpass[SIZE] = { 0 };                            // 입력받을 비밀번호 변수 설정

	while (1)
	{
		printf("input password : ");
		scanf_s("%s", inpass, SIZE);                      // 비밀번호 입력, 배열 위치 설정

		
		
			if (strcmp(inpass, mypass) == 0)             // 설정한 비밀번호와 입력된 비밀번호 비교
			{
				printf("nomal termination..\n");         // 맞으면 멘트 출력 후 프로그램 종료
				break;
			}
			
			printf("not matched, retry..\n");            // 틀리면 멘트 출력 후 다시 입력 단계로 돌아감
	}

	return 0;
}