/*
		�ۼ���	: 2019.11.17
		����		: Main
		��������	: None
*/
#include "func.h"
#include "Input_Output.h"


int main(void)
{
	int Process_Num;

	printf("��� ���μ����� �Է� �����ðڽ��ϱ�? : ");
	scanf("%d", &Process_Num);
	
	File_Input(Process_Num);
	return 0;
}