/*
* 주제: 선택지를 활용한 텍스트 게임
* 팀원: 신승민, 이승우, 최태산, 이현우
* 2021.06.14 수정(최종)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>// 타이머 사용
#pragma warning(disable:4996)
char A[20][20] = { '\0' };
int k = 0;


// 회원가입 구조체
typedef struct member {
	char id[20];// 아이디 
	char pw[20];// 비번
	struct member* next;
}M;


// 회원가입 메뉴 함수
void M_init() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌──────────────────────┐");
	printf("\n\t\t\t\t\t\t\t\t\t\t│      방탈출 게임     │");
	printf("\n\t\t\t\t\t\t\t\t\t\t└──────────────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t     ┌────────────┐");
	printf("\n\t\t\t\t\t\t\t\t\t\t     │ 1.회원가입 │");
	printf("\n\t\t\t\t\t\t\t\t\t\t     │ 2.로그인   │");
	printf("\n\t\t\t\t\t\t\t\t\t\t     │ 3.회원목록 │");
	printf("\n\t\t\t\t\t\t\t\t\t\t     │ 4.회원탈퇴 │");
	printf("\n\t\t\t\t\t\t\t\t\t\t     │ 5.회원수정 │");
	printf("\n\t\t\t\t\t\t\t\t\t\t     └────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요..... ");


}

// 회원가입 함수
int M_sign_up(M* target) {
	M* newNode = (M*)malloc(sizeof(M));
	M* newNode1 = target;
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌─────────────────────┐");
	printf("\n\t\t\t\t\t\t\t\t\t\t│       회원가입      │");
	printf("\n\t\t\t\t\t\t\t\t\t\t└─────────────────────┘\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t새로운 아이디 입력  :");
	scanf("%s", newNode->id);
	printf("\n\t\t\t\t\t\t\t\t\t\t새로운 비밀번호 입력  : ");
	scanf("%s", newNode->pw);


	while (newNode1 != NULL) {// 아이디 중복체크 
		if (strcmp(newNode->id, newNode1->id) == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이디 입니다...!\n");	return 0;
		}
		newNode1 = newNode1->next;
	}
	newNode->next = target->next;
	target->next = newNode;
	printf("\n\t\t\t\t\t\t\t\t\t\t회원가입이 완료되었습니다 !\n");
	Sleep(1000);
	system("cls");
}

// 회원목록 함수
void M_print(M* target) {
	int i = 1;// 번호
	M* curr = target->next;
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌─────────────────────┐");
	printf("\n\t\t\t\t\t\t\t\t\t\t│       회원목록      │");
	printf("\n\t\t\t\t\t\t\t\t\t\t└─────────────────────┘\n");
	while (curr != NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t     ────── %d ─────", i);
		printf("\n\t\t\t\t\t\t\t\t\t\t        ID: %s    ", curr->id);
		printf("\n\t\t\t\t\t\t\t\t\t\t        PW: %s    ", curr->pw);
		printf("\n\t\t\t\t\t\t\t\t\t\t     ──────────────\n");
		curr = curr->next;
		i++;
	}
	system("pause");
	system("cls");
}

// 회원탈퇴 함수
int M_delete(M* target) {
	int n = 0, i = 1;
	M* M_delete = target;
	char buff[50];
	printf("\n\t\t\t\t\t\t\t\t\t\t┌─────────────────────┐");
	printf("\n\t\t\t\t\t\t\t\t\t\t│       회원탈퇴      │");
	printf("\n\t\t\t\t\t\t\t\t\t\t└─────────────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t삭제할 아이디를 입력하세요  : ");
	scanf("%s", buff);

	while (M_delete != NULL) {

		n = strcmp(buff, M_delete->id);
		if (n == 0) {

			while (target) { // 삭제할 노드 찾기 
				if (target->next == M_delete)
					break;
				target = target->next;
			}
			target->next = M_delete->next;
			free(M_delete);
			printf("\n\t\t\t\t\t\t\t\t\t\t삭제되었습니다...!\n");


			break;
		}
		M_delete = M_delete->next;
	}
	if (n != 0) {
		printf("\n\t\t\t\t\t\t\t\t\t\t해당 아이디는 존재하지 않습니다...!\n");
		return 0;
	}
	Sleep(1000);
	system("cls");
}

// 회원수정 함수
int M_change(M* head) {
	int n = 0;
	M* M_change = head;
	M* M_change1 = head;
	char buff[50];
	char temp[50];
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌─────────────────────┐");
	printf("\n\t\t\t\t\t\t\t\t\t\t│       회원수정      │");
	printf("\n\t\t\t\t\t\t\t\t\t\t└─────────────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t수정할 아이디를 입력하세요  : ");
	scanf("%s", buff);

	while (M_change != NULL) {
		n = strcmp(buff, M_change->id);
		if (n == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t아이디 변경 : ");
			scanf("%s", temp);

			//scanf("%s", M_change->id);
			while (M_change1 != NULL) {// 아이디 중복체크 
				if (strcmp(temp, M_change1->id) == 0) {
					printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이디 입니다....!\n");
					return 0;
				}
				M_change1 = M_change1->next;
			}
			strcpy(M_change->id, temp);

			printf("\n\t\t\t\t\t\t\t\t\t\t비밀번호 변경: ");
			scanf("%s", M_change->pw);
			break;
		}
		M_change = M_change->next;
	}
	if (n != 0) {
		printf("\n\t\t\t\t\t\t\t\t\t\t해당 아이디는 존재하지 않습니다...!\n");
		return 0;
	}
	Sleep(1000);
	system("cls");
}

// 로그인 함수
int M_login(M* head) {
	M* M_login = head;
	int count = 0;
	int i = 0, p = 0, j = 1;
	char id[50], pw[50];
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌───────────────────┐");
	printf("\n\t\t\t\t\t\t\t\t\t\t│       로그인      │");
	printf("\n\t\t\t\t\t\t\t\t\t\t└───────────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t id  : ");
	scanf("%s", id);
	printf("\n\t\t\t\t\t\t\t\t\t\t pw  : ");
	scanf("%s", pw);

	while (M_login != NULL) {
		i = strcmp(id, M_login->id);
		p = strcmp(pw, M_login->pw);
		if (i == 0 && p == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t로그인 성공...! 잠시만 기다려 주십시오....\n");
			Sleep(2000);// 2초 대기
			count++;
			break;
		}
		M_login = M_login->next;
	}
	if (count == 0) { system("cls"); printf("\n\t\t\t\t\t\t\t\t\t\t로그인 실패...!"); }
	return count;
}


//==========================================================================


// 게임 아이템 구조체 
typedef struct item {
	char equipment[20];// 용품
	struct item* next;
}I;

// 게임 시작 메뉴 함수  
void G_init() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌──────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│         메뉴를 선택하세요        │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└──────────────────────────────────┘\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ┌────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t        │   1. 인벤토리  │\n");
	printf("\t\t\t\t\t\t\t\t\t\t        │   2. 조합      │\n");
	printf("\t\t\t\t\t\t\t\t\t\t        │   3. 조사      │\n");
	printf("\t\t\t\t\t\t\t\t\t\t        └────────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...... ");

}

// 게임 아이템 출력 함수 
void G_item(I* target) {
	int i = 0;// 번호
	I* curr = target->next;


	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌──────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│         보유한 아이템        │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└──────────────────────────────┘\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t ────────────────────────────\n");

	while (curr != NULL) {
		printf("\t\t\t\t\t\t\t\t\t\t        %s\n",  curr->equipment);
		curr = curr->next;
	}
	printf("\t\t\t\t\t\t\t\t\t\t ────────────────────────────\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t┌─────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│   뒤로가기  │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└─────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오...");
}

// 게임 선반 아이템 입력 
int G_table_select(I* target) {

	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t얻을 아이템을 입력해주십시오 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "망치") == 0 || strcmp(newNode->equipment, "얼룩제거제") == 0 || strcmp(newNode->equipment, "락커열쇠") == 0 || strcmp(newNode->equipment, "날붙이") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// 아이디 중복체크 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이템 입니다...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
		k++;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t조사 목록에 없는 아이템입니다...! \n");
		return 0;
	}
}

// 게임 작업대 아이템 입력 
int G_worktable_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t얻을 아이템 입력 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "수건") == 0 || strcmp(newNode->equipment, "자동차열쇠") == 0 || strcmp(newNode->equipment, "잭") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// 아이디 중복체크 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이템 입니다...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t조사 목록에 없는 아이템입니다...! \n");
		return 0;
	}
	k++;
}

// 게임 락커 아이템 입력 
int G_locker_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t얻을 아이템 입력 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "자동차번호판") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// 아이디 중복체크 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이템 입니다...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t조사 목록에 없는 아이템입니다...! \n");
		return 0;
	}
	k++;
}

// 게임 자동차 아이템 입력
int G_car_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t얻을 아이템 입력 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "문열쇠") == 0 || strcmp(newNode->equipment, "볼트커터") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이템 입니다...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t조사 목록에 없는 아이템입니다...! \n");
		return 0;
	}
	k++;
}

// 게임 조합 아이템 입력_칼
int G_mix_select1(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t얻을 아이템 입력 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "칼") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이템 입니다...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t조사 목록에 없는 아이템입니다...! \n");
		return 0;
	}
	k++;
}

// 게임 조합 아이템 입력_드라이버
int G_mix_select2(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t얻을 아이템 입력 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "드라이버") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t중복된 아이템 입니다...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t조사 목록에 없는 아이템입니다...! \n");
		return 0;
	}
	k++;
}


// 게임 조합
void G_mix() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│     조합할 아이템 선택     │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└────────────────────────────┘\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t  ┌────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t  │ 1. 조합을 시도한다     │\n");
	printf("\t\t\t\t\t\t\t\t\t\t  │ 2. 조합식을 확인한다   │\n");
	printf("\t\t\t\t\t\t\t\t\t\t  └────────────────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 ~ 2 제외)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");


}

// 게임 조합식
void G_mix1() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t    ┌────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t    │         조합식 확인        │\n");
	printf("\t\t\t\t\t\t\t\t\t\t    └────────────────────────────┘\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t┌──────────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│ 수건 +  날붙이 = 칼                  │\n");
	printf("\t\t\t\t\t\t\t\t\t\t│ 얼룩제거제 + 자동차번호판 = 비밀번호 │\n");
	printf("\t\t\t\t\t\t\t\t\t\t│ 날붙이 + 자동차열쇠 = 드라이버       │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└──────────────────────────────────────┘\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오...");
}

// 게임 조사  
void G_check() {
	printf("\t\t\t\t\t\t\t\t\t\t┌──────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│         조사할 장소 선택         │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└──────────────────────────────────┘\n\n"); Sleep(700);
	printf("\t\t\t\t\t\t\t\t\t\t     ┌────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t     │   1. 선반    2. 문     │\n");
	printf("\t\t\t\t\t\t\t\t\t\t     │   3. 작업대  4. 락커   │\n");
	printf("\t\t\t\t\t\t\t\t\t\t     │   5. 자동차  6. 셔터   │\n");
	printf("\t\t\t\t\t\t\t\t\t\t     └────────────────────────┘\n\n"); Sleep(700);
	////////////////////////// 아스키 아트 출력 코드  
	char print_temp[256];
	FILE* fp;
	fp = fopen("background.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t 파일 불러오기에 실패했습니다.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 아스키 아트 출력 코드  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 ~ 6 제외)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");

}

// 게임 선반 
void G_table() {

	printf("\t\t\t\t\t\t\t\t\t\t┌─────────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│          선반에 도착하였다.         │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└─────────────────────────────────────┘\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t          ┌────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t          │   1. 조사한다  │\n");
	printf("\t\t\t\t\t\t\t\t\t\t          └────────────────┘\n"); Sleep(1000);

	////////////////////////// 아스키 아트 출력 코드  
	char print_temp[256];
	FILE* fp;
	fp = fopen("shelf.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t 파일 불러오기에 실패했습니다.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 아스키 아트 출력 코드  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 제외)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");

}

// 게임 문 
void G_door() {
	printf("\t\t\t\t\t\t\t\t\t\t┌─────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│         문에 도착하였다.        │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└─────────────────────────────────┘\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t문이 굳게 잠겨있다. \n");	Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t문을 여시려면 열쇠가 필요합니다. \n"); Sleep(1500);
	printf("\t\t\t\t\t\t\t\t\t\t문을 여시겠습니까? \n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t        ┌─────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t        │   1. 문을 연다  │\n");
	printf("\t\t\t\t\t\t\t\t\t\t        └─────────────────┘\n\n"); Sleep(1000);
	////////////////////////// 아스키 아트 출력 코드  
	char print_temp[256];
	FILE* fp;
	fp = fopen("door.txt", "r");


	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t 파일 불러오기에 실패했습니다.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 아스키 아트 출력 코드  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 제외)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");

}

// 게임 작업대  
void G_worktable() {
	printf("\t\t\t\t\t\t\t\t\t\t┌───────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│        작업대에 도착하였다.       │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└───────────────────────────────────┘\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t작업대에서 사물함(1번)과 사물함(2번)을 발견했다.\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t사물함 1번은 공업용 덕테이프로 꽁꽁 감겨져 있고\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t사물함 2번은 나사로 고정되어있다.\n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t      ┌──────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t      │   1. 1번 사물함 조사 │\n");
	printf("\t\t\t\t\t\t\t\t\t\t      │   2. 2번 사물함 조사 │\n");
	printf("\t\t\t\t\t\t\t\t\t\t      │   3. 주변을 조사한다 │\n");
	printf("\t\t\t\t\t\t\t\t\t\t      └──────────────────────┘\n\n"); Sleep(1000);
	////////////////////////// 아스키 아트 출력 코드  
	char print_temp[256];
	FILE* fp;
	fp = fopen("table.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t파일 불러오기에 실패했습니다.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 아스키 아트 출력 코드  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 ~ 3 제외)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");

}

// 게임 락커
void G_locker() {
	printf("\t\t\t\t\t\t\t\t\t\t┌──────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│         락커에 도착하였다.       │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└──────────────────────────────────┘\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t락커는 약해보이는 자물쇠로 잠겨있다. \n\n");	Sleep(1300);
	printf("\t\t\t\t\t\t\t\t\t\t        ┌────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t        │   1. 조사한다  │\n");
	printf("\t\t\t\t\t\t\t\t\t\t        └────────────────┘\n\n"); Sleep(1000);
	////////////////////////// 아스키 아트 출력 코드  
	char print_temp[256];
	FILE* fp;
	fp = fopen("lockers.txt", "r");

	//system()

	if (fp == NULL) {
		printf(" 파일 불러오기에 실패했습니다.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 아스키 아트 출력 코드  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 ~ 6 제외)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");

}

// 게임 자동차
void G_car() {
	////////////////////////// 아스키 아트 출력 코드  
	printf("\t\t\t\t\t\t\t\t\t\t┌───────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│        자동차에 도착하였다.       │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└───────────────────────────────────┘\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t자동차의 문은 모두 잠겨있다.\n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t      ┌─────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t      │   1. 조사한다(아래) │\n");
	printf("\t\t\t\t\t\t\t\t\t\t      │   2. 조사한다(내부) │\n");
	printf("\t\t\t\t\t\t\t\t\t\t      └─────────────────────┘\n\n"); Sleep(1000);
	char print_temp[256];
	FILE* fp;
	fp = fopen("car.txt", "r");

	//system()

	if (fp == NULL) {
		printf("파일 불러오기에 실패했습니다.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 아스키 아트 출력 코드 
	Sleep(1000);
	printf("\n\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 ~ 2 제외)");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");
}

// 게임 셔터 
void G_shutter() {
	printf("\t\t\t\t\t\t\t\t\t\t┌─────────────────────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t│         셔터에 도착하였다.      │\n");
	printf("\t\t\t\t\t\t\t\t\t\t└─────────────────────────────────┘\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t셔터는 얇은 쇠사슬로 칭칭 감겨있다. \n");	Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t또한 사용을 오랫동안 하지 않아 셔터가 녹슬어있다.\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t셔터가 녹슬어서 도구없이 셔터를 들어올리기는 힘들 것 같다. \n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t       ┌───────────────────┐\n");
	printf("\t\t\t\t\t\t\t\t\t\t       │   1. 셔터를 연다  │\n");
	printf("\t\t\t\t\t\t\t\t\t\t       └───────────────────┘\n"); Sleep(1000);
	////////////////////////// 아스키 아트 출력 코드  
	char print_temp[256];
	FILE* fp;
	fp = fopen("shutter.txt", "r");

	//system()

	if (fp == NULL) {
		printf(" 파일 불러오기에 실패했습니다.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 아스키 아트 출력 코드  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 문자나 입력하십시오. (1 제외)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");
}


int main() {
	// (회원 가입)=====================================================================
	char number_1[20][20] = { '\0' };
	char number_2[20][20] = { '\0' };
	char number_3[20][20] = { '\0' };
	char number_4[20][20] = { '\0' };
	int key1 = 0, key2 = 0;
	strcpy(number_1[0], "망치"); strcpy(number_1[1], "얼룩제거제"); strcpy(number_1[2], "락커열쇠"); strcpy(number_1[3], "날붙이");
	strcpy(number_2[0], "수건"); strcpy(number_2[1], "자동차열쇠"); strcpy(number_2[2], "잭");
	strcpy(number_3[0], "자동차번호판");
	strcpy(number_4[0], "문열쇠"); strcpy(number_4[1], "볼트커터");
	M* head = (M*)malloc(sizeof(M));
	head->next = NULL;
	int loop = 1, count = 0;
	while (loop) {
		int sel = 0;
		M_init();
		scanf("%d", &sel);
		while (getchar() != '\n');
		if (0 < sel && sel <= 5) {
			if (sel == 1) { system("cls"); M_sign_up(head); }// 1번
			if (sel == 2) { system("cls"); count = M_login(head); }// 2번
			if (sel == 3) { system("cls"); M_print(head); }// 3번
			if (sel == 4) { system("cls"); M_delete(head); }// 4번
			if (sel == 5) { system("cls"); M_change(head); }// 5번
		}
		else {
			Sleep(1000);
			system("cls");
		}
		if (count == 1) { loop = 0; }// 로그인 성공
	}
	// =================================================================================

	I* head2 = (I*)malloc(sizeof(I));
	head2->next = NULL;

	while (1) {
		int sel2 = 0, sel3 = 0, sel4 = 0, sel5 = 0, sel6 = 0, sel7 = 0, sel8 = 0, sel9 = 0, sel10 = 0, sel11 = 0, sel12 = 0, sel13 = 0, sel14 = 0;
		system("cls");
		G_init();
		scanf("%d", &sel2);
		while (getchar() != '\n');
		if (0 < sel2 && sel2 <= 3) {
			// 아이템 
			if (sel2 == 1) {
				system("cls");
				G_item(head2);
				scanf("%d", &sel5);
				if (sel5 == 1) { exit; }
			}

			// 조합
			else if (sel2 == 2) {
				system("cls");
				G_mix();

				scanf("%d", &sel10);
				if (sel10 == 1) {
					system("cls");
					printf("\n\n");
					for (int i = 0; i < 20; i++) {
						if (A[i][0] == NULL) break;
						printf("\n\t\t\t\t\t\t\t\t\t\t %d.%s\n", i + 1, A[i]);
					}

					printf("\n\t\t\t\t\t\t\t\t\t\t 조합할 두개의 아이템의 번호를 선택해주세요.\n\n");
					printf("\t\t\t\t\t\t\t\t\t\t 첫 번째: ");
					scanf(" %d", &key1);
					printf("\n\n");
					printf("\t\t\t\t\t\t\t\t\t\t 두 번째: ");
					scanf(" %d", &key2);

					if (strcmp(A[key1 - 1], "얼룩제거제") == 0 && strcmp(A[key2 - 1], "자동차번호판") == 0 || strcmp(A[key1 - 1], "자동차번호판") == 0 && strcmp(A[key2 - 1], "얼룩제거제") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 조합 성공 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 비밀번호를 발견하였습니다 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 비밀번호: 9931\n"); 
						system("pause");
					}
					else if (strcmp(A[key1 - 1], "수건") == 0 && strcmp(A[key2 - 1], "날붙이") == 0 || strcmp(A[key1 - 1], "날붙이") == 0 && strcmp(A[key2 - 1], "수건") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 조합 성공 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 칼을 만들었습니다 !\n"); Sleep(1500);
						G_mix_select1(head2);
						Sleep(1000);
					}
					else if (strcmp(A[key1 - 1], "자동차열쇠") == 0 && strcmp(A[key2 - 1], "날붙이") == 0 || strcmp(A[key1 - 1], "날붙이") == 0 && strcmp(A[key2 - 1], "자동차열쇠") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 조합 성공 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 드라이버를 만들었습니다 !\n"); Sleep(1500);
						G_mix_select2(head2);
						Sleep(1000);
					}
					else {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 조합 실패...!\n"); Sleep(1000);
						exit;
					}
				}

				// 조합 -> 얼룩이 지워진 자동차 번호판
				/*if (sel10 == 1) {
					I* G_mix = head2;
					I* G_mix2 = head2;
					int j = 0, k = 0, kk = 0;
					while (G_mix != NULL) {
						j = strcmp(G_mix->equipment, "얼룩제거제");
						if (j == 0) {
							while (G_mix2 != NULL) {
								k = strcmp(G_mix2->equipment, "자동차번호판");
								if (j == 0 && k == 0) {
									printf("\n");
									printf("\n\t\t\t\t\t조합 성공 !\n"); Sleep(1500);
									printf("\n\t\t\t\t\t비밀번호를 발견하였습니다 !\n"); Sleep(1500);
									printf("\n\t\t\t\t\t비밀번호: 9931\n");
									kk++;
									Sleep(2000);
									break;
								}
								G_mix2 = G_mix2->next;
							}
						}
						G_mix = G_mix->next;
					}
					if (kk != 1) {
						printf("\n\t\t\t\t\t조합에 실패하였습니다...!\n");
						Sleep(1000);
						exit;
					}
				}*/

				// 조합 -> 뒤로가기
				else if (sel10 == 2) {
					system("cls");
					G_mix1();
					scanf("%d", &sel14);
					if (sel14 == 1) { exit; }
				}
				else if (sel10 == 3) {
					printf("\n\t\t\t\t\t\t\t\t\t\t 조합창을 나갑니다.\n");
					Sleep(1500);
					exit;
				}
			}

			// 조사
			else if (sel2 == 3) {
				system("cls");
				G_check();
				scanf("%d", &sel3);

				// 조사 -> 선반 
				if (sel3 == 1) {
					system("cls");
					G_table();
					scanf("%d", &sel4);
					if (sel4 == 1) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t조사 결과\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
						//printf("\n\t\t\t\t\t" "망치","얼룩제거제","락커열쇠","날붙이") 
						/*printf("--A--\n");
						for(int i=0;i<4;i++){
							printf("%s ",A[i]);
						}
						printf("--number_1--\n");
						for(int i=0;i<4;i++){
							printf("%s ",number_1[i]);
						}*/
						for (int i = 0; i < 4; i++) {
							if (strcmp(number_1[i], A[0]) == 0 || strcmp(number_1[i], A[1]) == 0 || strcmp(number_1[i], A[2]) == 0 || strcmp(number_1[i], A[3]) == 0 || strcmp(number_1[i], A[4]) == 0 || strcmp(number_1[i], A[5]) == 0 || strcmp(number_1[i], A[6]) == 0 || strcmp(number_1[i], A[7]) == 0 || strcmp(number_1[i], A[8]) == 0) {
								continue;
							}Sleep(700);
							printf(" %s ", number_1[i]);
						}
						printf("를 발견하였습니다.\n\n"); Sleep(1000);
						G_table_select(head2);
						Sleep(1000);
						exit;
					}
					if (sel4 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t선반에서 떠납니다.\n");
						Sleep(1000);
						exit;
					}

				}

				// 조사 -> 문 (엔딩1)
				if (sel3 == 2) {
					system("cls");
					G_door();
					scanf("%d", &sel6);
					if (sel6 == 1) {
						I* G_door = head2;
						int n3 = 0;

						while (G_door != NULL) {
							n3 = strcmp(G_door->equipment, "문열쇠");
							if (n3 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t문열쇠를 사용하여 문을 열었습니다.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t문을 열었더니 도어락이 걸려있는 문이 나타났습니다 !\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t비밀번호를 입력하세요(4자리) : ");
								scanf("%d", &sel11);
								if (sel11 == 9931) {
									system("cls");
									printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t비밀번호를 입력하자 문이 열렸다.\n"); Sleep(2000);
									printf("\n\n\t\t\t\t\t\t\t\t\t\t문 사이로 빛이 보인다.\n"); Sleep(2000);
									system("cls");

									printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌───────────────────────────┐\n");
									printf("\t\t\t\t\t\t\t\t\t\t│          ENDING 1         │\n");
									printf("\t\t\t\t\t\t\t\t\t\t└───────────────────────────┘\n\n"); Sleep(2000);
									////////////////////////// 아스키 아트 출력 코드  
									char print_temp2[256];
									FILE* fp2;
									fp2 = fopen("succeed.txt", "r");


									//system()

									if (fp2 == NULL) {
										printf("\n\t\t\t\t\t\t\t\t\t\t 파일 불러오기에 실패했습니다.\n");
										//return 1;
									}
									while (fgets(print_temp2, 255, fp2) != NULL) {
										printf(print_temp2);
									}
									puts("");
									fclose(fp2);
									/////////////////////////// 아스키 아트 출력 코드  
									printf("\n\n\t\t\t\t\t\t\t\t\t\t문을 열어 탈출하였다 ! \n\n"); Sleep(1500);
									printf("\n\t\t\t\t\t\t\t\t\t\t탈출 성공 ! \n\n");

									system("pause");
									break;
								}
								else {
									printf("\n\t\t\t\t\t\t\t\t\t\t비밀번호가 틀립니다...!\n");
									Sleep(1000);
									break;
								}
							}
							G_door = G_door->next;
						}
						if (n3 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t문이 굳게 잠겨있습니다. (문열쇠 필요)\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel6 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t문에서 떠납니다.\n");
						Sleep(1000);
						exit;
					}
				}

				// 조사 -> 작업대 
				if (sel3 == 3) {
					system("cls");
					G_worktable();
					scanf("%d", &sel7);// 1번 사물함
					if (sel7 == 1) {
						int n5 = 0;
						int loop2 = 1;
						I* G_worktable = head2;

						while (G_worktable != NULL) {
							n5 = strcmp(G_worktable->equipment, "칼");
							if (n5 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'칼'을 사용하여 테이프를 끊었습니다.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t< HINT > 자동차열쇠는 열쇠고리형 십자 드라이버입니다.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t조사 결과\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 1; i < 2; i++) {
									if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_2[i]);
								}
								printf("를 발견하였습니다.\n\n"); Sleep(1000);

								G_worktable_select(head2);
								Sleep(1000);
								break;
							}
							G_worktable = G_worktable->next;
						}
						if (n5 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t공업용 덕테이프로 꽁꽁 쌓여져 있어 맨손으로는 열 수 없습니다...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel7 == 2) {
						int n6 = 0;
						I* G_worktable2 = head2;

						while (G_worktable2 != NULL) {
							n6 = strcmp(G_worktable2->equipment, "드라이버");
							if (n6 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'드라이버'를 사용하여 나사를 풀었습니다.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t조사 결과\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 2; i < 3; i++) {
									if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_2[i]);
								}
								printf("를 발견하였습니다.\n\n"); Sleep(1000);

								G_worktable_select(head2);
								Sleep(1000);
								break;
							}
							G_worktable2 = G_worktable2->next;
						}
						if (n6 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t나사로 고정되어 있어 열 수 없습니다...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel7 == 3) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t조사 결과\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
						for (int i = 0; i < 1; i++) {
							if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
								continue;
							}Sleep(700);
							printf(" %s ", number_2[i]);
						}
						printf("를 발견하였습니다.\n\n"); Sleep(1000);
						G_worktable_select(head2);
						Sleep(1000);
						exit;
					}
					else {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t작업대에서 떠납니다.\n");
						Sleep(1000);
						exit;
					}
				}

				// 조사 -> 락커 
				if (sel3 == 4) {
					system("cls");
					G_locker();
					scanf("%d", &sel8);
					if (sel8 == 1) {
						int n = 0;
						I* G_locker = head2;

						while (G_locker != NULL) {
							n = strcmp(G_locker->equipment, "망치");
							if (n == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'망치'를 사용하여 자물쇠를 부쉈습니다.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t조사 결과\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 0; i < 1; i++) {
									if (strcmp(number_3[i], A[0]) == 0 || strcmp(number_3[i], A[1]) == 0 || strcmp(number_3[i], A[2]) == 0 || strcmp(number_3[i], A[3]) == 0 || strcmp(number_3[i], A[4]) == 0 || strcmp(number_3[i], A[5]) == 0 || strcmp(number_3[i], A[6]) == 0 || strcmp(number_3[i], A[7]) == 0 || strcmp(number_3[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_3[i]);
								}
								printf("를 발견하였습니다.\n\n"); Sleep(1000);


								//printf("\n\t\t\t\t\t'자동차번호판'을 발견하였습니다 !\n");
								G_locker_select(head2);
								Sleep(1000);
								break;
							}
							G_locker = G_locker->next;
						}
						if (n != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t락커를 조사하기 위해선 '망치'가 필요합니다...!\n");
							Sleep(2000);
							exit;
						}
					}
					if (sel8 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t락커에서 떠납니다.\n");
						Sleep(1000);
						exit;
					}
				}

				// 조사 -> 자동차
				if (sel3 == 5) {
					system("cls");
					G_car();
					scanf("%d", &sel9);
					if (sel9 == 1) {// 잭 사용
						I* G_car = head2;
						int n2 = 0;
						while (G_car != NULL) {
							n2 = strcmp(G_car->equipment, "잭");
							if (n2 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'잭'을 사용하여 자동차를 들어올려 조사를 진행합니다.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t조사 결과\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(0500);
								for (int i = 0; i < 1; i++) {
									if (strcmp(number_4[i], A[0]) == 0 || strcmp(number_4[i], A[1]) == 0 || strcmp(number_4[i], A[2]) == 0 || strcmp(number_4[i], A[3]) == 0 || strcmp(number_4[i], A[4]) == 0 || strcmp(number_4[i], A[5]) == 0 || strcmp(number_4[i], A[6]) == 0 || strcmp(number_4[i], A[7]) == 0 || strcmp(number_4[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_4[i]);
								}
								printf("를 발견하였습니다.\n\n"); Sleep(1000);
								//printf("\n\t\t\t\t\t'문열쇠', '볼트커터'를 발견하였습니다 !\n");
								G_car_select(head2);
								Sleep(1000);
								break;
							}
							G_car = G_car->next;
						}
						if (n2 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t자동차 아래를 조사하기 위해선 '잭'이 필요합니다...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel9 == 2) {// 자동차 열쇠 사용 
						I* G_car2 = head2;
						int n3 = 0;
						while (G_car2 != NULL) {
							n3 = strcmp(G_car2->equipment, "자동차열쇠");
							if (n3 == 0) {
								printf("\n\n");
								printf("\n\t\t\t\t\t\t\t\t\t\t'자동차열쇠'를 사용하여 자동차 트렁크를 열었습니다.\n");
								printf("\n\t\t\t\t\t\t\t\t\t\t조사 결과\n\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 1; i < 2; i++) {
									if (strcmp(number_4[i], A[0]) == 0 || strcmp(number_4[i], A[1]) == 0 || strcmp(number_4[i], A[2]) == 0 || strcmp(number_4[i], A[3]) == 0 || strcmp(number_4[i], A[4]) == 0 || strcmp(number_4[i], A[5]) == 0 || strcmp(number_4[i], A[6]) == 0 || strcmp(number_4[i], A[7]) == 0 || strcmp(number_4[i], A[8]) == 0) {
										continue;
									}
									printf(" %s ", number_4[i]);
								}
								printf("를 발견하였습니다.\n\n"); Sleep(1000);
								//printf("\n\t\t\t\t\t'문열쇠', '볼트커터'를 발견하였습니다 !\n");
								G_car_select(head2);
								Sleep(1000);
								break;
							}
							G_car2 = G_car2->next;
						}
						if (n3 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t자동차 트렁크를 조사하기 위해선 '자동차열쇠'가 필요합니다...!\n");
							Sleep(2000);
							exit;
						}
					}
					else {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t자동차에서 떠납니다.\n");
						Sleep(1000);
						exit;
					}

				}

				// 조사 -> 셔터 (엔딩2)
				if (sel3 == 6) {
					system("cls");
					G_shutter();
					scanf("%d", &sel12);
					if (sel12 == 1) {
						I* G_shutter = head2;
						I* G_shutter2 = head2;
						int n10 = 0;
						int n11 = 0;
						int n12 = 1;

						while (G_shutter != NULL) {
							n10 = strcmp(G_shutter->equipment, "볼트커터");
							if (n10 == 0) {
								system("cls");
								n12 = 0;
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t볼트커터를 사용하여 쇠사슬을 제거했습니다.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t탈출하려면 셔터를 들어올려야 합니다.\n\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t┌────────────────────────┐\n");
								printf("\t\t\t\t\t\t\t\t\t\t│   1. 셔터를 들어올린다 │\n");
								printf("\t\t\t\t\t\t\t\t\t\t└────────────────────────┘\n");
								printf("\n\n\t\t\t\t\t\t\t\t\t\t뒤로가려면 아무 번호나 입력하십시오. (1 제외)\n");
								printf("\t\t\t\t\t\t\t\t\t\t번호를 입력하세요...");
								scanf("%d", &sel13);
								if (sel13 == 1) {
									while (G_shutter2 != NULL) {
										n11 = strcmp(G_shutter2->equipment, "잭");
										if (n11 == 0) {
											system("cls");
											printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t잭으로 녹슨 셔터를 들어올렸다.\n"); Sleep(1500);
											printf("\n\t\t\t\t\t\t\t\t\t\t셔터 사이로 빛이 보인다.\n"); Sleep(1500);
											system("cls");
											printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t┌────────────────────────────┐\n");
											printf("\t\t\t\t\t\t\t\t\t\t│          ENDING 2          │\n");
											printf("\t\t\t\t\t\t\t\t\t\t└────────────────────────────┘\n\n"); Sleep(2000);
											////////////////////////// 아스키 아트 출력 코드  
											char print_temp3[256];
											FILE* fp3;
											fp3 = fopen("succeed.txt", "r");


											//system()

											if (fp3 == NULL) {
												printf("\n\t\t\t\t\t\t\t\t\t\t 파일 불러오기에 실패했습니다.\n");
												//return 1;
											}
											while (fgets(print_temp3, 255, fp3) != NULL) {
												printf(print_temp3);
											}
											puts("");
											fclose(fp3);
											/////////////////////////// 아스키 아트 출력 코드  
											printf("\n\n\t\t\t\t\t\t\t\t\t\t셔터를 열어 탈출하였다 ! \n\n"); Sleep(1500);
											printf("\n\t\t\t\t\t\t\t\t\t\t탈출 성공 !\n\n");
											n12 = 0;
											system("pause");
											break;
										}
										G_shutter2 = G_shutter2->next;
									}
									if (n11 != 0) {
										printf("\n\t\t\t\t\t\t\t\t\t\t셔터를 들어올리려먼 잭이 필요합니다.");
										n12 = 0;
										Sleep(2000);
										exit;
									}
								}
								if (sel13 == 2) {
									printf("\n\t\t\t\t\t\t\t\t\t\t셔터를 떠납니다.\n");
									n12 = 0;
									Sleep(1000);
									exit;
								}
							}
							G_shutter = G_shutter->next;
						}
						if (n10 != 0 && n12 == 1) {
							printf("\n\t\t\t\t\t\t\t\t\t\t쇠사슬로 단단히 고정되어있습니다.(볼트커터 필요)\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel12 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t셔터에서 떠납니다.\n");
						Sleep(1000);
						exit;
					}
				}
				// 조사 -> 뒤로가기
				if (sel3 == 7) { system("cls"); exit; }
			}
		}
	}
	return 0;
}
