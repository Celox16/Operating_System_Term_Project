#pragma once
/*
		�ۼ���	: 2019.11.17
		����		: ���μ����� �Է°� ��¿� �ʿ��� ������
		��������	: None
*/

// Process �Է�
// �ݵ�� ���� ���Ѿ���
// �켱���� ���ڰ� Ŭ���� �켱���� ���ƾ� ��
typedef struct PROCESS_INPUT {
	int Process_Number;					// ���μ��� ��
	int Process_ID;						// ���μ��� ID
	int Time_Arrival;					// �����ð�
	int Service_Time;					// ���� �ð�
	int Priority;						// �켱 ����
	int Time_Quamtum;					// �ð� �Ҵ緮
}PROCESS_INPUT;


// Process ���
// �ݵ�� ���� ���Ѿ� ��
typedef struct PROCESS_OUTPUT {
	int Gantt_Chart;					// ��Ʈ ��Ʈ
	int Latency_for_Each_Process;		// �� ���μ��� �� ���ð�
	int Average_Latency;				// ��� ��� �ð�
	int Response_Time_for_Each_Process;	// �� ���μ��� �� ����ð�
	int Average_Response_Time;			// ��� ���� �ð�
	int Return_Time_for_Each_Process;	// �� ���μ��� �� ��ȯ �ð�
	int Average_Return_Time;			// ��� ��ȯ ��
}PROCESS_OUTPUT;
