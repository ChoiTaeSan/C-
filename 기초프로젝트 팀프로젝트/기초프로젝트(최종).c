/*
* 輿薯: 摹鷗雖蒂 �倏踿� 臢蝶お 啪歜
* ぜ錳: 褐蝓團, 檜蝓辦, 譆鷓骯, 檜⑷辦
* 2021.06.14 熱薑(譆謙)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>// 顫檜該 餌辨
#pragma warning(disable:4996)
char A[20][20] = { '\0' };
int k = 0;


// �蛾灠㊣� 掘褻羹
typedef struct member {
	char id[20];// 嬴檜蛤 
	char pw[20];// 綠廓
	struct member* next;
}M;


// �蛾灠㊣� 詭景 л熱
void M_init() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t\t\t\t\t\t\t\t\t弛      寞驍轎 啪歜     弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t     忙式式式式式式式式式式式式忖");
	printf("\n\t\t\t\t\t\t\t\t\t\t     弛 1.�蛾灠㊣� 弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t     弛 2.煎斜檣   弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t     弛 3.�蛾籪騇� 弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t     弛 4.�蛾躠酷� 弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t     弛 5.�蛾虃鶬� 弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t     戌式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂..... ");


}

// �蛾灠㊣� л熱
int M_sign_up(M* target) {
	M* newNode = (M*)malloc(sizeof(M));
	M* newNode1 = target;
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t\t\t\t\t\t\t\t\t弛       �蛾灠㊣�      弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t億煎遴 嬴檜蛤 殮溘  :");
	scanf("%s", newNode->id);
	printf("\n\t\t\t\t\t\t\t\t\t\t億煎遴 綠塵廓�� 殮溘  : ");
	scanf("%s", newNode->pw);


	while (newNode1 != NULL) {// 嬴檜蛤 醞犒羹觼 
		if (strcmp(newNode->id, newNode1->id) == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蛤 殮棲棻...!\n");	return 0;
		}
		newNode1 = newNode1->next;
	}
	newNode->next = target->next;
	target->next = newNode;
	printf("\n\t\t\t\t\t\t\t\t\t\t�蛾灠㊣埬� 諫猿腎歷蝗棲棻 !\n");
	Sleep(1000);
	system("cls");
}

// �蛾籪騇� л熱
void M_print(M* target) {
	int i = 1;// 廓��
	M* curr = target->next;
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t\t\t\t\t\t\t\t\t弛       �蛾籪騇�      弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式戎\n");
	while (curr != NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t     式式式式式式 %d 式式式式式", i);
		printf("\n\t\t\t\t\t\t\t\t\t\t        ID: %s    ", curr->id);
		printf("\n\t\t\t\t\t\t\t\t\t\t        PW: %s    ", curr->pw);
		printf("\n\t\t\t\t\t\t\t\t\t\t     式式式式式式式式式式式式式式\n");
		curr = curr->next;
		i++;
	}
	system("pause");
	system("cls");
}

// �蛾躠酷� л熱
int M_delete(M* target) {
	int n = 0, i = 1;
	M* M_delete = target;
	char buff[50];
	printf("\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t\t\t\t\t\t\t\t\t弛       �蛾躠酷�      弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t餉薯й 嬴檜蛤蒂 殮溘ж撮蹂  : ");
	scanf("%s", buff);

	while (M_delete != NULL) {

		n = strcmp(buff, M_delete->id);
		if (n == 0) {

			while (target) { // 餉薯й 喻萄 瓊晦 
				if (target->next == M_delete)
					break;
				target = target->next;
			}
			target->next = M_delete->next;
			free(M_delete);
			printf("\n\t\t\t\t\t\t\t\t\t\t餉薯腎歷蝗棲棻...!\n");


			break;
		}
		M_delete = M_delete->next;
	}
	if (n != 0) {
		printf("\n\t\t\t\t\t\t\t\t\t\tп渡 嬴檜蛤朝 襄營ж雖 彊蝗棲棻...!\n");
		return 0;
	}
	Sleep(1000);
	system("cls");
}

// �蛾虃鶬� л熱
int M_change(M* head) {
	int n = 0;
	M* M_change = head;
	M* M_change1 = head;
	char buff[50];
	char temp[50];
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t\t\t\t\t\t\t\t\t弛       �蛾虃鶬�      弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t熱薑й 嬴檜蛤蒂 殮溘ж撮蹂  : ");
	scanf("%s", buff);

	while (M_change != NULL) {
		n = strcmp(buff, M_change->id);
		if (n == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t嬴檜蛤 滲唳 : ");
			scanf("%s", temp);

			//scanf("%s", M_change->id);
			while (M_change1 != NULL) {// 嬴檜蛤 醞犒羹觼 
				if (strcmp(temp, M_change1->id) == 0) {
					printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蛤 殮棲棻....!\n");
					return 0;
				}
				M_change1 = M_change1->next;
			}
			strcpy(M_change->id, temp);

			printf("\n\t\t\t\t\t\t\t\t\t\t綠塵廓�� 滲唳: ");
			scanf("%s", M_change->pw);
			break;
		}
		M_change = M_change->next;
	}
	if (n != 0) {
		printf("\n\t\t\t\t\t\t\t\t\t\tп渡 嬴檜蛤朝 襄營ж雖 彊蝗棲棻...!\n");
		return 0;
	}
	Sleep(1000);
	system("cls");
}

// 煎斜檣 л熱
int M_login(M* head) {
	M* M_login = head;
	int count = 0;
	int i = 0, p = 0, j = 1;
	char id[50], pw[50];
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t\t\t\t\t\t\t\t\t弛       煎斜檣      弛");
	printf("\n\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t id  : ");
	scanf("%s", id);
	printf("\n\t\t\t\t\t\t\t\t\t\t pw  : ");
	scanf("%s", pw);

	while (M_login != NULL) {
		i = strcmp(id, M_login->id);
		p = strcmp(pw, M_login->pw);
		if (i == 0 && p == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t煎斜檣 撩奢...! 濡衛虜 晦棻溥 輿褊衛螃....\n");
			Sleep(2000);// 2蟾 渠晦
			count++;
			break;
		}
		M_login = M_login->next;
	}
	if (count == 0) { system("cls"); printf("\n\t\t\t\t\t\t\t\t\t\t煎斜檣 褒ぬ...!"); }
	return count;
}


//==========================================================================


// 啪歜 嬴檜蠱 掘褻羹 
typedef struct item {
	char equipment[20];// 辨ヶ
	struct item* next;
}I;

// 啪歜 衛濛 詭景 л熱  
void G_init() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛         詭景蒂 摹鷗ж撮蹂        弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t        忙式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t        弛   1. 檣漸饜葬  弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t        弛   2. 褻м      弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t        弛   3. 褻餌      弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t        戌式式式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...... ");

}

// 啪歜 嬴檜蠱 轎溘 л熱 
void G_item(I* target) {
	int i = 0;// 廓��
	I* curr = target->next;


	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛         爾嶸и 嬴檜蠱        弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t 式式式式式式式式式式式式式式式式式式式式式式式式式式式式\n");

	while (curr != NULL) {
		printf("\t\t\t\t\t\t\t\t\t\t        %s\n",  curr->equipment);
		curr = curr->next;
	}
	printf("\t\t\t\t\t\t\t\t\t\t 式式式式式式式式式式式式式式式式式式式式式式式式式式式式\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛   菴煎陛晦  弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃...");
}

// 啪歜 摹奩 嬴檜蠱 殮溘 
int G_table_select(I* target) {

	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t橢擊 嬴檜蠱擊 殮溘п輿褊衛螃 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "蜂纂") == 0 || strcmp(newNode->equipment, "橡瑁薯剪薯") == 0 || strcmp(newNode->equipment, "塊醴翮潸") == 0 || strcmp(newNode->equipment, "陳稱檜") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// 嬴檜蛤 醞犒羹觼 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蠱 殮棲棻...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
		k++;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 跡煙縑 橈朝 嬴檜蠱殮棲棻...! \n");
		return 0;
	}
}

// 啪歜 濛機渠 嬴檜蠱 殮溘 
int G_worktable_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t橢擊 嬴檜蠱 殮溘 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "熱勒") == 0 || strcmp(newNode->equipment, "濠翕離翮潸") == 0 || strcmp(newNode->equipment, "燮") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// 嬴檜蛤 醞犒羹觼 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蠱 殮棲棻...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 跡煙縑 橈朝 嬴檜蠱殮棲棻...! \n");
		return 0;
	}
	k++;
}

// 啪歜 塊醴 嬴檜蠱 殮溘 
int G_locker_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t橢擊 嬴檜蠱 殮溘 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "濠翕離廓��っ") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// 嬴檜蛤 醞犒羹觼 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蠱 殮棲棻...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 跡煙縑 橈朝 嬴檜蠱殮棲棻...! \n");
		return 0;
	}
	k++;
}

// 啪歜 濠翕離 嬴檜蠱 殮溘
int G_car_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t橢擊 嬴檜蠱 殮溘 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "僥翮潸") == 0 || strcmp(newNode->equipment, "獐お醴攪") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蠱 殮棲棻...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 跡煙縑 橈朝 嬴檜蠱殮棲棻...! \n");
		return 0;
	}
	k++;
}

// 啪歜 褻м 嬴檜蠱 殮溘_蠔
int G_mix_select1(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t橢擊 嬴檜蠱 殮溘 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "蠔") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蠱 殮棲棻...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 跡煙縑 橈朝 嬴檜蠱殮棲棻...! \n");
		return 0;
	}
	k++;
}

// 啪歜 褻м 嬴檜蠱 殮溘_萄塭檜幗
int G_mix_select2(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t橢擊 嬴檜蠱 殮溘 : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "萄塭檜幗") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t醞犒脹 嬴檜蠱 殮棲棻...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 跡煙縑 橈朝 嬴檜蠱殮棲棻...! \n");
		return 0;
	}
	k++;
}


// 啪歜 褻м
void G_mix() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛     褻мй 嬴檜蠱 摹鷗     弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t  忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t  弛 1. 褻м擊 衛紫и棻     弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t  弛 2. 褻м衝擊 �挫恉挬�   弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t  戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 ~ 2 薯諼)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");


}

// 啪歜 褻м衝
void G_mix1() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t    忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t    弛         褻м衝 �挫�        弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t    戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛 熱勒 +  陳稱檜 = 蠔                  弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛 橡瑁薯剪薯 + 濠翕離廓��っ = 綠塵廓�� 弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛 陳稱檜 + 濠翕離翮潸 = 萄塭檜幗       弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃...");
}

// 啪歜 褻餌  
void G_check() {
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛         褻餌й 濰模 摹鷗         弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(700);
	printf("\t\t\t\t\t\t\t\t\t\t     忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t     弛   1. 摹奩    2. 僥     弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t     弛   3. 濛機渠  4. 塊醴   弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t     弛   5. 濠翕離  6. 敷攪   弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t     戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(700);
	////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	char print_temp[256];
	FILE* fp;
	fp = fopen("background.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 ~ 6 薯諼)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");

}

// 啪歜 摹奩 
void G_table() {

	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛          摹奩縑 紫雜ж艘棻.         弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t          忙式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t          弛   1. 褻餌и棻  弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t          戌式式式式式式式式式式式式式式式式戎\n"); Sleep(1000);

	////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	char print_temp[256];
	FILE* fp;
	fp = fopen("shelf.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 薯諼)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");

}

// 啪歜 僥 
void G_door() {
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛         僥縑 紫雜ж艘棻.        弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t僥檜 掩啪 濡啖氈棻. \n");	Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t僥擊 罹衛溥賊 翮潸陛 в蹂м棲棻. \n"); Sleep(1500);
	printf("\t\t\t\t\t\t\t\t\t\t僥擊 罹衛啊蝗棲梱? \n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t        忙式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t        弛   1. 僥擊 翱棻  弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t        戌式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	char print_temp[256];
	FILE* fp;
	fp = fopen("door.txt", "r");


	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 薯諼)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");

}

// 啪歜 濛機渠  
void G_worktable() {
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛        濛機渠縑 紫雜ж艘棻.       弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t濛機渠縑憮 餌僭л(1廓)婁 餌僭л(2廓)擊 嫦唯ц棻.\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t餌僭л 1廓擎 奢機辨 湯纔檜Щ煎 笞笞 馬啖螳 氈堅\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t餌僭л 2廓擎 釭餌煎 堅薑腎橫氈棻.\n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t      忙式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t      弛   1. 1廓 餌僭л 褻餌 弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t      弛   2. 2廓 餌僭л 褻餌 弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t      弛   3. 輿滲擊 褻餌и棻 弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t      戌式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	char print_temp[256];
	FILE* fp;
	fp = fopen("table.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\tだ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 ~ 3 薯諼)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");

}

// 啪歜 塊醴
void G_locker() {
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛         塊醴縑 紫雜ж艘棻.       弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t塊醴朝 擒п爾檜朝 濠僭潸煎 濡啖氈棻. \n\n");	Sleep(1300);
	printf("\t\t\t\t\t\t\t\t\t\t        忙式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t        弛   1. 褻餌и棻  弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t        戌式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	char print_temp[256];
	FILE* fp;
	fp = fopen("lockers.txt", "r");

	//system()

	if (fp == NULL) {
		printf(" だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 ~ 6 薯諼)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");

}

// 啪歜 濠翕離
void G_car() {
	////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛        濠翕離縑 紫雜ж艘棻.       弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t濠翕離曖 僥擎 賅舒 濡啖氈棻.\n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t      忙式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t      弛   1. 褻餌и棻(嬴楚) 弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t      弛   2. 褻餌и棻(頂睡) 弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t      戌式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	char print_temp[256];
	FILE* fp;
	fp = fopen("car.txt", "r");

	//system()

	if (fp == NULL) {
		printf("だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄 
	Sleep(1000);
	printf("\n\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 ~ 2 薯諼)");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");
}

// 啪歜 敷攪 
void G_shutter() {
	printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t弛         敷攪縑 紫雜ж艘棻.      弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t敷攪朝 整擎 潸餌蝸煎 蘆蘆 馬啖氈棻. \n");	Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t傳и 餌辨擊 螃概翕寰 ж雖 彊嬴 敷攪陛 喬蝸橫氈棻.\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t敷攪陛 喬蝸橫憮 紫掘橈檜 敷攪蒂 菟橫螢葬晦朝 ��菟 匙 偽棻. \n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t       忙式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t\t\t\t\t\t\t       弛   1. 敷攪蒂 翱棻  弛\n");
	printf("\t\t\t\t\t\t\t\t\t\t       戌式式式式式式式式式式式式式式式式式式式戎\n"); Sleep(1000);
	////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	char print_temp[256];
	FILE* fp;
	fp = fopen("shutter.txt", "r");

	//system()

	if (fp == NULL) {
		printf(" だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 僥濠釭 殮溘ж褊衛螃. (1 薯諼)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");
}


int main() {
	// (�蛾� 陛殮)=====================================================================
	char number_1[20][20] = { '\0' };
	char number_2[20][20] = { '\0' };
	char number_3[20][20] = { '\0' };
	char number_4[20][20] = { '\0' };
	int key1 = 0, key2 = 0;
	strcpy(number_1[0], "蜂纂"); strcpy(number_1[1], "橡瑁薯剪薯"); strcpy(number_1[2], "塊醴翮潸"); strcpy(number_1[3], "陳稱檜");
	strcpy(number_2[0], "熱勒"); strcpy(number_2[1], "濠翕離翮潸"); strcpy(number_2[2], "燮");
	strcpy(number_3[0], "濠翕離廓��っ");
	strcpy(number_4[0], "僥翮潸"); strcpy(number_4[1], "獐お醴攪");
	M* head = (M*)malloc(sizeof(M));
	head->next = NULL;
	int loop = 1, count = 0;
	while (loop) {
		int sel = 0;
		M_init();
		scanf("%d", &sel);
		while (getchar() != '\n');
		if (0 < sel && sel <= 5) {
			if (sel == 1) { system("cls"); M_sign_up(head); }// 1廓
			if (sel == 2) { system("cls"); count = M_login(head); }// 2廓
			if (sel == 3) { system("cls"); M_print(head); }// 3廓
			if (sel == 4) { system("cls"); M_delete(head); }// 4廓
			if (sel == 5) { system("cls"); M_change(head); }// 5廓
		}
		else {
			Sleep(1000);
			system("cls");
		}
		if (count == 1) { loop = 0; }// 煎斜檣 撩奢
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
			// 嬴檜蠱 
			if (sel2 == 1) {
				system("cls");
				G_item(head2);
				scanf("%d", &sel5);
				if (sel5 == 1) { exit; }
			}

			// 褻м
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

					printf("\n\t\t\t\t\t\t\t\t\t\t 褻мй 舒偃曖 嬴檜蠱曖 廓�ㄧ� 摹鷗п輿撮蹂.\n\n");
					printf("\t\t\t\t\t\t\t\t\t\t 羅 廓簞: ");
					scanf(" %d", &key1);
					printf("\n\n");
					printf("\t\t\t\t\t\t\t\t\t\t 舒 廓簞: ");
					scanf(" %d", &key2);

					if (strcmp(A[key1 - 1], "橡瑁薯剪薯") == 0 && strcmp(A[key2 - 1], "濠翕離廓��っ") == 0 || strcmp(A[key1 - 1], "濠翕離廓��っ") == 0 && strcmp(A[key2 - 1], "橡瑁薯剪薯") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 褻м 撩奢 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 綠塵廓�ㄧ� 嫦唯ж艘蝗棲棻 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 綠塵廓��: 9931\n"); 
						system("pause");
					}
					else if (strcmp(A[key1 - 1], "熱勒") == 0 && strcmp(A[key2 - 1], "陳稱檜") == 0 || strcmp(A[key1 - 1], "陳稱檜") == 0 && strcmp(A[key2 - 1], "熱勒") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 褻м 撩奢 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 蠔擊 虜菟歷蝗棲棻 !\n"); Sleep(1500);
						G_mix_select1(head2);
						Sleep(1000);
					}
					else if (strcmp(A[key1 - 1], "濠翕離翮潸") == 0 && strcmp(A[key2 - 1], "陳稱檜") == 0 || strcmp(A[key1 - 1], "陳稱檜") == 0 && strcmp(A[key2 - 1], "濠翕離翮潸") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 褻м 撩奢 !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t 萄塭檜幗蒂 虜菟歷蝗棲棻 !\n"); Sleep(1500);
						G_mix_select2(head2);
						Sleep(1000);
					}
					else {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t 褻м 褒ぬ...!\n"); Sleep(1000);
						exit;
					}
				}

				// 褻м -> 橡瑁檜 雖錶霞 濠翕離 廓��っ
				/*if (sel10 == 1) {
					I* G_mix = head2;
					I* G_mix2 = head2;
					int j = 0, k = 0, kk = 0;
					while (G_mix != NULL) {
						j = strcmp(G_mix->equipment, "橡瑁薯剪薯");
						if (j == 0) {
							while (G_mix2 != NULL) {
								k = strcmp(G_mix2->equipment, "濠翕離廓��っ");
								if (j == 0 && k == 0) {
									printf("\n");
									printf("\n\t\t\t\t\t褻м 撩奢 !\n"); Sleep(1500);
									printf("\n\t\t\t\t\t綠塵廓�ㄧ� 嫦唯ж艘蝗棲棻 !\n"); Sleep(1500);
									printf("\n\t\t\t\t\t綠塵廓��: 9931\n");
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
						printf("\n\t\t\t\t\t褻м縑 褒ぬж艘蝗棲棻...!\n");
						Sleep(1000);
						exit;
					}
				}*/

				// 褻м -> 菴煎陛晦
				else if (sel10 == 2) {
					system("cls");
					G_mix1();
					scanf("%d", &sel14);
					if (sel14 == 1) { exit; }
				}
				else if (sel10 == 3) {
					printf("\n\t\t\t\t\t\t\t\t\t\t 褻м璽擊 釭骨棲棻.\n");
					Sleep(1500);
					exit;
				}
			}

			// 褻餌
			else if (sel2 == 3) {
				system("cls");
				G_check();
				scanf("%d", &sel3);

				// 褻餌 -> 摹奩 
				if (sel3 == 1) {
					system("cls");
					G_table();
					scanf("%d", &sel4);
					if (sel4 == 1) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t褻餌 唸婁\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
						//printf("\n\t\t\t\t\t" "蜂纂","橡瑁薯剪薯","塊醴翮潸","陳稱檜") 
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
						printf("蒂 嫦唯ж艘蝗棲棻.\n\n"); Sleep(1000);
						G_table_select(head2);
						Sleep(1000);
						exit;
					}
					if (sel4 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t摹奩縑憮 集陶棲棻.\n");
						Sleep(1000);
						exit;
					}

				}

				// 褻餌 -> 僥 (縛註1)
				if (sel3 == 2) {
					system("cls");
					G_door();
					scanf("%d", &sel6);
					if (sel6 == 1) {
						I* G_door = head2;
						int n3 = 0;

						while (G_door != NULL) {
							n3 = strcmp(G_door->equipment, "僥翮潸");
							if (n3 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t僥翮潸蒂 餌辨ж罹 僥擊 翮歷蝗棲棻.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t僥擊 翮歷渦棲 紫橫塊檜 勘溥氈朝 僥檜 釭顫陬蝗棲棻 !\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t綠塵廓�ㄧ� 殮溘ж撮蹂(4濠葬) : ");
								scanf("%d", &sel11);
								if (sel11 == 9931) {
									system("cls");
									printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t綠塵廓�ㄧ� 殮溘ж濠 僥檜 翮溜棻.\n"); Sleep(2000);
									printf("\n\n\t\t\t\t\t\t\t\t\t\t僥 餌檜煎 維檜 爾檣棻.\n"); Sleep(2000);
									system("cls");

									printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
									printf("\t\t\t\t\t\t\t\t\t\t弛          ENDING 1         弛\n");
									printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(2000);
									////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
									char print_temp2[256];
									FILE* fp2;
									fp2 = fopen("succeed.txt", "r");


									//system()

									if (fp2 == NULL) {
										printf("\n\t\t\t\t\t\t\t\t\t\t だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
										//return 1;
									}
									while (fgets(print_temp2, 255, fp2) != NULL) {
										printf(print_temp2);
									}
									puts("");
									fclose(fp2);
									/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
									printf("\n\n\t\t\t\t\t\t\t\t\t\t僥擊 翮橫 驍轎ж艘棻 ! \n\n"); Sleep(1500);
									printf("\n\t\t\t\t\t\t\t\t\t\t驍轎 撩奢 ! \n\n");

									system("pause");
									break;
								}
								else {
									printf("\n\t\t\t\t\t\t\t\t\t\t綠塵廓�ㄟ� ぎ董棲棻...!\n");
									Sleep(1000);
									break;
								}
							}
							G_door = G_door->next;
						}
						if (n3 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t僥檜 掩啪 濡啖氈蝗棲棻. (僥翮潸 в蹂)\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel6 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t僥縑憮 集陶棲棻.\n");
						Sleep(1000);
						exit;
					}
				}

				// 褻餌 -> 濛機渠 
				if (sel3 == 3) {
					system("cls");
					G_worktable();
					scanf("%d", &sel7);// 1廓 餌僭л
					if (sel7 == 1) {
						int n5 = 0;
						int loop2 = 1;
						I* G_worktable = head2;

						while (G_worktable != NULL) {
							n5 = strcmp(G_worktable->equipment, "蠔");
							if (n5 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'蠔'擊 餌辨ж罹 纔檜Щ蒂 莒歷蝗棲棻.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t< HINT > 濠翕離翮潸朝 翮潸堅葬⑽ 褊濠 萄塭檜幗殮棲棻.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t褻餌 唸婁\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 1; i < 2; i++) {
									if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_2[i]);
								}
								printf("蒂 嫦唯ж艘蝗棲棻.\n\n"); Sleep(1000);

								G_worktable_select(head2);
								Sleep(1000);
								break;
							}
							G_worktable = G_worktable->next;
						}
						if (n5 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t奢機辨 湯纔檜Щ煎 笞笞 論罹螳 氈橫 裔槳戲煎朝 翮 熱 橈蝗棲棻...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel7 == 2) {
						int n6 = 0;
						I* G_worktable2 = head2;

						while (G_worktable2 != NULL) {
							n6 = strcmp(G_worktable2->equipment, "萄塭檜幗");
							if (n6 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'萄塭檜幗'蒂 餌辨ж罹 釭餌蒂 ヴ歷蝗棲棻.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 唸婁\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 2; i < 3; i++) {
									if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_2[i]);
								}
								printf("蒂 嫦唯ж艘蝗棲棻.\n\n"); Sleep(1000);

								G_worktable_select(head2);
								Sleep(1000);
								break;
							}
							G_worktable2 = G_worktable2->next;
						}
						if (n6 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t釭餌煎 堅薑腎橫 氈橫 翮 熱 橈蝗棲棻...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel7 == 3) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t褻餌 唸婁\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
						for (int i = 0; i < 1; i++) {
							if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
								continue;
							}Sleep(700);
							printf(" %s ", number_2[i]);
						}
						printf("蒂 嫦唯ж艘蝗棲棻.\n\n"); Sleep(1000);
						G_worktable_select(head2);
						Sleep(1000);
						exit;
					}
					else {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t濛機渠縑憮 集陶棲棻.\n");
						Sleep(1000);
						exit;
					}
				}

				// 褻餌 -> 塊醴 
				if (sel3 == 4) {
					system("cls");
					G_locker();
					scanf("%d", &sel8);
					if (sel8 == 1) {
						int n = 0;
						I* G_locker = head2;

						while (G_locker != NULL) {
							n = strcmp(G_locker->equipment, "蜂纂");
							if (n == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'蜂纂'蒂 餌辨ж罹 濠僭潸蒂 睡膝蝗棲棻.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 唸婁\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 0; i < 1; i++) {
									if (strcmp(number_3[i], A[0]) == 0 || strcmp(number_3[i], A[1]) == 0 || strcmp(number_3[i], A[2]) == 0 || strcmp(number_3[i], A[3]) == 0 || strcmp(number_3[i], A[4]) == 0 || strcmp(number_3[i], A[5]) == 0 || strcmp(number_3[i], A[6]) == 0 || strcmp(number_3[i], A[7]) == 0 || strcmp(number_3[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_3[i]);
								}
								printf("蒂 嫦唯ж艘蝗棲棻.\n\n"); Sleep(1000);


								//printf("\n\t\t\t\t\t'濠翕離廓��っ'擊 嫦唯ж艘蝗棲棻 !\n");
								G_locker_select(head2);
								Sleep(1000);
								break;
							}
							G_locker = G_locker->next;
						}
						if (n != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t塊醴蒂 褻餌ж晦 嬪п摹 '蜂纂'陛 в蹂м棲棻...!\n");
							Sleep(2000);
							exit;
						}
					}
					if (sel8 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t塊醴縑憮 集陶棲棻.\n");
						Sleep(1000);
						exit;
					}
				}

				// 褻餌 -> 濠翕離
				if (sel3 == 5) {
					system("cls");
					G_car();
					scanf("%d", &sel9);
					if (sel9 == 1) {// 燮 餌辨
						I* G_car = head2;
						int n2 = 0;
						while (G_car != NULL) {
							n2 = strcmp(G_car->equipment, "燮");
							if (n2 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'燮'擊 餌辨ж罹 濠翕離蒂 菟橫螢溥 褻餌蒂 霞чм棲棻.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 唸婁\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(0500);
								for (int i = 0; i < 1; i++) {
									if (strcmp(number_4[i], A[0]) == 0 || strcmp(number_4[i], A[1]) == 0 || strcmp(number_4[i], A[2]) == 0 || strcmp(number_4[i], A[3]) == 0 || strcmp(number_4[i], A[4]) == 0 || strcmp(number_4[i], A[5]) == 0 || strcmp(number_4[i], A[6]) == 0 || strcmp(number_4[i], A[7]) == 0 || strcmp(number_4[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_4[i]);
								}
								printf("蒂 嫦唯ж艘蝗棲棻.\n\n"); Sleep(1000);
								//printf("\n\t\t\t\t\t'僥翮潸', '獐お醴攪'蒂 嫦唯ж艘蝗棲棻 !\n");
								G_car_select(head2);
								Sleep(1000);
								break;
							}
							G_car = G_car->next;
						}
						if (n2 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t濠翕離 嬴楚蒂 褻餌ж晦 嬪п摹 '燮'檜 в蹂м棲棻...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel9 == 2) {// 濠翕離 翮潸 餌辨 
						I* G_car2 = head2;
						int n3 = 0;
						while (G_car2 != NULL) {
							n3 = strcmp(G_car2->equipment, "濠翕離翮潸");
							if (n3 == 0) {
								printf("\n\n");
								printf("\n\t\t\t\t\t\t\t\t\t\t'濠翕離翮潸'蒂 餌辨ж罹 濠翕離 お毽觼蒂 翮歷蝗棲棻.\n");
								printf("\n\t\t\t\t\t\t\t\t\t\t褻餌 唸婁\n\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 1; i < 2; i++) {
									if (strcmp(number_4[i], A[0]) == 0 || strcmp(number_4[i], A[1]) == 0 || strcmp(number_4[i], A[2]) == 0 || strcmp(number_4[i], A[3]) == 0 || strcmp(number_4[i], A[4]) == 0 || strcmp(number_4[i], A[5]) == 0 || strcmp(number_4[i], A[6]) == 0 || strcmp(number_4[i], A[7]) == 0 || strcmp(number_4[i], A[8]) == 0) {
										continue;
									}
									printf(" %s ", number_4[i]);
								}
								printf("蒂 嫦唯ж艘蝗棲棻.\n\n"); Sleep(1000);
								//printf("\n\t\t\t\t\t'僥翮潸', '獐お醴攪'蒂 嫦唯ж艘蝗棲棻 !\n");
								G_car_select(head2);
								Sleep(1000);
								break;
							}
							G_car2 = G_car2->next;
						}
						if (n3 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t濠翕離 お毽觼蒂 褻餌ж晦 嬪п摹 '濠翕離翮潸'陛 в蹂м棲棻...!\n");
							Sleep(2000);
							exit;
						}
					}
					else {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t濠翕離縑憮 集陶棲棻.\n");
						Sleep(1000);
						exit;
					}

				}

				// 褻餌 -> 敷攪 (縛註2)
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
							n10 = strcmp(G_shutter->equipment, "獐お醴攪");
							if (n10 == 0) {
								system("cls");
								n12 = 0;
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t獐お醴攪蒂 餌辨ж罹 潸餌蝸擊 薯剪ц蝗棲棻.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t驍轎ж溥賊 敷攪蒂 菟橫螢溥撿 м棲棻.\n\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
								printf("\t\t\t\t\t\t\t\t\t\t弛   1. 敷攪蒂 菟橫螢萼棻 弛\n");
								printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
								printf("\n\n\t\t\t\t\t\t\t\t\t\t菴煎陛溥賊 嬴鼠 廓�ㄢ� 殮溘ж褊衛螃. (1 薯諼)\n");
								printf("\t\t\t\t\t\t\t\t\t\t廓�ㄧ� 殮溘ж撮蹂...");
								scanf("%d", &sel13);
								if (sel13 == 1) {
									while (G_shutter2 != NULL) {
										n11 = strcmp(G_shutter2->equipment, "燮");
										if (n11 == 0) {
											system("cls");
											printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t燮戲煎 喬蝦 敷攪蒂 菟橫螢溜棻.\n"); Sleep(1500);
											printf("\n\t\t\t\t\t\t\t\t\t\t敷攪 餌檜煎 維檜 爾檣棻.\n"); Sleep(1500);
											system("cls");
											printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
											printf("\t\t\t\t\t\t\t\t\t\t弛          ENDING 2          弛\n");
											printf("\t\t\t\t\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n"); Sleep(2000);
											////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
											char print_temp3[256];
											FILE* fp3;
											fp3 = fopen("succeed.txt", "r");


											//system()

											if (fp3 == NULL) {
												printf("\n\t\t\t\t\t\t\t\t\t\t だ橾 碳楝螃晦縑 褒ぬц蝗棲棻.\n");
												//return 1;
											}
											while (fgets(print_temp3, 255, fp3) != NULL) {
												printf(print_temp3);
											}
											puts("");
											fclose(fp3);
											/////////////////////////// 嬴蝶酈 嬴お 轎溘 囀萄  
											printf("\n\n\t\t\t\t\t\t\t\t\t\t敷攪蒂 翮橫 驍轎ж艘棻 ! \n\n"); Sleep(1500);
											printf("\n\t\t\t\t\t\t\t\t\t\t驍轎 撩奢 !\n\n");
											n12 = 0;
											system("pause");
											break;
										}
										G_shutter2 = G_shutter2->next;
									}
									if (n11 != 0) {
										printf("\n\t\t\t\t\t\t\t\t\t\t敷攪蒂 菟橫螢葬溥試 燮檜 в蹂м棲棻.");
										n12 = 0;
										Sleep(2000);
										exit;
									}
								}
								if (sel13 == 2) {
									printf("\n\t\t\t\t\t\t\t\t\t\t敷攪蒂 集陶棲棻.\n");
									n12 = 0;
									Sleep(1000);
									exit;
								}
							}
							G_shutter = G_shutter->next;
						}
						if (n10 != 0 && n12 == 1) {
							printf("\n\t\t\t\t\t\t\t\t\t\t潸餌蝸煎 欽欽�� 堅薑腎橫氈蝗棲棻.(獐お醴攪 в蹂)\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel12 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t敷攪縑憮 集陶棲棻.\n");
						Sleep(1000);
						exit;
					}
				}
				// 褻餌 -> 菴煎陛晦
				if (sel3 == 7) { system("cls"); exit; }
			}
		}
	}
	return 0;
}
