#include "func.h"
#include "Input_Output.h"

int Menu(void)
{
	int Menu_choice;
	printf("=======Operating System Term Project=======\n");
	printf("1. �����ٸ� �˰���\n");
	printf("2. ���μ��� �ʱ�ȭ\n");
	printf("3. ����\n");
	printf("�޴��� �����Ͽ� �ֽʽÿ� : "); scanf("%d", &Menu_choice);
	printf("===========================================\n");

	return Menu_choice;
}