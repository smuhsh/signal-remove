#include<stdio.h>
#include<signal.h>

int main(void){

	sigset_t set;

	sigisempty(&set); //시그널 집합 변수의 내용 모두 삭제
	sigaddset(&set, SIGINT);//시그널 집합 변수에 SIGINT를 추가
	//시그인트가 등록되었는지 확인
	switch(sigismember (&set,SIGINT)){
		case 0: printf("SIGINT는 포함 되어있습니다.\n");
				break;
		case 1: pritnf("SIGINT는 없습니다.\n");
				break;
		dafault: printf("sigismember() 호출에 실패했습니다\n");
	}
	//SIGINT삭제
	sigdelset(&set, SIGINT);



	return 0;
}
