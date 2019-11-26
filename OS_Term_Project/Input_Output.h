#pragma once
/*
		작성일	: 2019.11.17
		목적		: 프로세스의 입력과 출력에 필요한 변수들
		수정사항	: None
*/

// Process 입력
// 반드시 순서 지켜야함
// 우선순위 숫자가 클수록 우선순위 높아야 함
typedef struct PROCESS_INPUT {
	int Process_Number;					// 프로세스 수
	int Process_ID;						// 프로세스 ID
	int Time_Arrival;					// 도착시간
	int Service_Time;					// 실행 시간
	int Priority;						// 우선 순위
	int Time_Quamtum;					// 시간 할당량
}PROCESS_INPUT;


// Process 출력
// 반드시 순서 지켜야 함
typedef struct PROCESS_OUTPUT {
	int Gantt_Chart;					// 간트 차트
	int Latency_for_Each_Process;		// 각 프로세스 별 대기시간
	int Average_Latency;				// 평균 대기 시간
	int Response_Time_for_Each_Process;	// 각 프로세스 별 응답시간
	int Average_Response_Time;			// 평균 응답 시간
	int Return_Time_for_Each_Process;	// 각 프로세스 별 반환 시간
	int Average_Return_Time;			// 평균 반환 시
}PROCESS_OUTPUT;
