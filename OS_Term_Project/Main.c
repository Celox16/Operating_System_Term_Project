/*
		작성일	: 2019.11.17
		목적		: Main
		수정사항	: None
*/
#include "func.h"
#include "Input_Output.h"


int main(void)
{
	int Process_Num;

	printf("몇개의 프로세스를 입력 받으시겠습니까? : ");
	scanf("%d", &Process_Num);
	
	File_Input(Process_Num);
	return 0;
}