/*
* ����: �������� Ȱ���� �ؽ�Ʈ ����
* ����: �Ž¹�, �̽¿�, ���»�, ������
* 2021.06.14 ����(����)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>// Ÿ�̸� ���
#pragma warning(disable:4996)
char A[20][20] = { '\0' };
int k = 0;


// ȸ������ ����ü
typedef struct member {
	char id[20];// ���̵� 
	char pw[20];// ���
	struct member* next;
}M;


// ȸ������ �޴� �Լ�
void M_init() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t������������������������������������������������");
	printf("\n\t\t\t\t\t\t\t\t\t\t��      ��Ż�� ����     ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t������������������������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t     ����������������������������");
	printf("\n\t\t\t\t\t\t\t\t\t\t     �� 1.ȸ������ ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t     �� 2.�α���   ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t     �� 3.ȸ����� ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t     �� 4.ȸ��Ż�� ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t     �� 5.ȸ������ ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t     ����������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���..... ");


}

// ȸ������ �Լ�
int M_sign_up(M* target) {
	M* newNode = (M*)malloc(sizeof(M));
	M* newNode1 = target;
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������");
	printf("\n\t\t\t\t\t\t\t\t\t\t��       ȸ������      ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t���ο� ���̵� �Է�  :");
	scanf("%s", newNode->id);
	printf("\n\t\t\t\t\t\t\t\t\t\t���ο� ��й�ȣ �Է�  : ");
	scanf("%s", newNode->pw);


	while (newNode1 != NULL) {// ���̵� �ߺ�üũ 
		if (strcmp(newNode->id, newNode1->id) == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ���̵� �Դϴ�...!\n");	return 0;
		}
		newNode1 = newNode1->next;
	}
	newNode->next = target->next;
	target->next = newNode;
	printf("\n\t\t\t\t\t\t\t\t\t\tȸ�������� �Ϸ�Ǿ����ϴ� !\n");
	Sleep(1000);
	system("cls");
}

// ȸ����� �Լ�
void M_print(M* target) {
	int i = 1;// ��ȣ
	M* curr = target->next;
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������");
	printf("\n\t\t\t\t\t\t\t\t\t\t��       ȸ�����      ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������\n");
	while (curr != NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t     ������������ %d ����������", i);
		printf("\n\t\t\t\t\t\t\t\t\t\t        ID: %s    ", curr->id);
		printf("\n\t\t\t\t\t\t\t\t\t\t        PW: %s    ", curr->pw);
		printf("\n\t\t\t\t\t\t\t\t\t\t     ����������������������������\n");
		curr = curr->next;
		i++;
	}
	system("pause");
	system("cls");
}

// ȸ��Ż�� �Լ�
int M_delete(M* target) {
	int n = 0, i = 1;
	M* M_delete = target;
	char buff[50];
	printf("\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������");
	printf("\n\t\t\t\t\t\t\t\t\t\t��       ȸ��Ż��      ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t������ ���̵� �Է��ϼ���  : ");
	scanf("%s", buff);

	while (M_delete != NULL) {

		n = strcmp(buff, M_delete->id);
		if (n == 0) {

			while (target) { // ������ ��� ã�� 
				if (target->next == M_delete)
					break;
				target = target->next;
			}
			target->next = M_delete->next;
			free(M_delete);
			printf("\n\t\t\t\t\t\t\t\t\t\t�����Ǿ����ϴ�...!\n");


			break;
		}
		M_delete = M_delete->next;
	}
	if (n != 0) {
		printf("\n\t\t\t\t\t\t\t\t\t\t�ش� ���̵�� �������� �ʽ��ϴ�...!\n");
		return 0;
	}
	Sleep(1000);
	system("cls");
}

// ȸ������ �Լ�
int M_change(M* head) {
	int n = 0;
	M* M_change = head;
	M* M_change1 = head;
	char buff[50];
	char temp[50];
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������");
	printf("\n\t\t\t\t\t\t\t\t\t\t��       ȸ������      ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t������ ���̵� �Է��ϼ���  : ");
	scanf("%s", buff);

	while (M_change != NULL) {
		n = strcmp(buff, M_change->id);
		if (n == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t���̵� ���� : ");
			scanf("%s", temp);

			//scanf("%s", M_change->id);
			while (M_change1 != NULL) {// ���̵� �ߺ�üũ 
				if (strcmp(temp, M_change1->id) == 0) {
					printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ���̵� �Դϴ�....!\n");
					return 0;
				}
				M_change1 = M_change1->next;
			}
			strcpy(M_change->id, temp);

			printf("\n\t\t\t\t\t\t\t\t\t\t��й�ȣ ����: ");
			scanf("%s", M_change->pw);
			break;
		}
		M_change = M_change->next;
	}
	if (n != 0) {
		printf("\n\t\t\t\t\t\t\t\t\t\t�ش� ���̵�� �������� �ʽ��ϴ�...!\n");
		return 0;
	}
	Sleep(1000);
	system("cls");
}

// �α��� �Լ�
int M_login(M* head) {
	M* M_login = head;
	int count = 0;
	int i = 0, p = 0, j = 1;
	char id[50], pw[50];
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t������������������������������������������");
	printf("\n\t\t\t\t\t\t\t\t\t\t��       �α���      ��");
	printf("\n\t\t\t\t\t\t\t\t\t\t������������������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t id  : ");
	scanf("%s", id);
	printf("\n\t\t\t\t\t\t\t\t\t\t pw  : ");
	scanf("%s", pw);

	while (M_login != NULL) {
		i = strcmp(id, M_login->id);
		p = strcmp(pw, M_login->pw);
		if (i == 0 && p == 0) {
			printf("\n\t\t\t\t\t\t\t\t\t\t�α��� ����...! ��ø� ��ٷ� �ֽʽÿ�....\n");
			Sleep(2000);// 2�� ���
			count++;
			break;
		}
		M_login = M_login->next;
	}
	if (count == 0) { system("cls"); printf("\n\t\t\t\t\t\t\t\t\t\t�α��� ����...!"); }
	return count;
}


//==========================================================================


// ���� ������ ����ü 
typedef struct item {
	char equipment[20];// ��ǰ
	struct item* next;
}I;

// ���� ���� �޴� �Լ�  
void G_init() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��         �޴��� �����ϼ���        ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ��   1. �κ��丮  ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ��   2. ����      ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ��   3. ����      ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ������������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...... ");

}

// ���� ������ ��� �Լ� 
void G_item(I* target) {
	int i = 0;// ��ȣ
	I* curr = target->next;


	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��         ������ ������        ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������������\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t ��������������������������������������������������������\n");

	while (curr != NULL) {
		printf("\t\t\t\t\t\t\t\t\t\t        %s\n",  curr->equipment);
		curr = curr->next;
	}
	printf("\t\t\t\t\t\t\t\t\t\t ��������������������������������������������������������\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��   �ڷΰ���  ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�...");
}

// ���� ���� ������ �Է� 
int G_table_select(I* target) {

	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t���� �������� �Է����ֽʽÿ� : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "��ġ") == 0 || strcmp(newNode->equipment, "���������") == 0 || strcmp(newNode->equipment, "��Ŀ����") == 0 || strcmp(newNode->equipment, "������") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// ���̵� �ߺ�üũ 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ������ �Դϴ�...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
		k++;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t���� ��Ͽ� ���� �������Դϴ�...! \n");
		return 0;
	}
}

// ���� �۾��� ������ �Է� 
int G_worktable_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t���� ������ �Է� : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "����") == 0 || strcmp(newNode->equipment, "�ڵ�������") == 0 || strcmp(newNode->equipment, "��") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// ���̵� �ߺ�üũ 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ������ �Դϴ�...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t���� ��Ͽ� ���� �������Դϴ�...! \n");
		return 0;
	}
	k++;
}

// ���� ��Ŀ ������ �Է� 
int G_locker_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t���� ������ �Է� : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "�ڵ�����ȣ��") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {// ���̵� �ߺ�üũ 
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ������ �Դϴ�...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t���� ��Ͽ� ���� �������Դϴ�...! \n");
		return 0;
	}
	k++;
}

// ���� �ڵ��� ������ �Է�
int G_car_select(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t���� ������ �Է� : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "������") == 0 || strcmp(newNode->equipment, "��ƮĿ��") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ������ �Դϴ�...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t���� ��Ͽ� ���� �������Դϴ�...! \n");
		return 0;
	}
	k++;
}

// ���� ���� ������ �Է�_Į
int G_mix_select1(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t���� ������ �Է� : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "Į") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ������ �Դϴ�...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t���� ��Ͽ� ���� �������Դϴ�...! \n");
		return 0;
	}
	k++;
}

// ���� ���� ������ �Է�_����̹�
int G_mix_select2(I* target) {
	I* newNode = (I*)malloc(sizeof(I));
	I* newNode1 = target;

	printf("\n\t\t\t\t\t\t\t\t\t\t���� ������ �Է� : ");
	scanf("%s", newNode->equipment);

	if (strcmp(newNode->equipment, "����̹�") == 0) {
		strcpy(A[k], newNode->equipment);
		while (newNode1 != NULL) {
			if (strcmp(newNode->equipment, newNode1->equipment) == 0) {
				printf("\n\t\t\t\t\t\t\t\t\t\t�ߺ��� ������ �Դϴ�...!\n");
				return 0;
			}
			newNode1 = newNode1->next;
		}

		newNode->next = target->next;
		target->next = newNode;
	}
	else {
		printf("\n\t\t\t\t\t\t\t\t\t\t���� ��Ͽ� ���� �������Դϴ�...! \n");
		return 0;
	}
	k++;
}


// ���� ����
void G_mix() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��     ������ ������ ����     ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t  ����������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t  �� 1. ������ �õ��Ѵ�     ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t  �� 2. ���ս��� Ȯ���Ѵ�   ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t  ����������������������������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ~ 2 ����)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");


}

// ���� ���ս�
void G_mix1() {
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t    ������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t    ��         ���ս� Ȯ��        ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t    ������������������������������������������������������������\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t��������������������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t�� ���� +  ������ = Į                  ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t�� ��������� + �ڵ�����ȣ�� = ��й�ȣ ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t�� ������ + �ڵ������� = ����̹�       ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t��������������������������������������������������������������������������������\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�...");
}

// ���� ����  
void G_check() {
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��         ������ ��� ����         ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������\n\n"); Sleep(700);
	printf("\t\t\t\t\t\t\t\t\t\t     ����������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t     ��   1. ����    2. ��     ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t     ��   3. �۾���  4. ��Ŀ   ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t     ��   5. �ڵ���  6. ����   ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t     ����������������������������������������������������\n\n"); Sleep(700);
	////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	char print_temp[256];
	FILE* fp;
	fp = fopen("background.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t ���� �ҷ����⿡ �����߽��ϴ�.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ~ 6 ����)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");

}

// ���� ���� 
void G_table() {

	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��          ���ݿ� �����Ͽ���.         ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������������\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t          ������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t          ��   1. �����Ѵ�  ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t          ������������������������������������\n"); Sleep(1000);

	////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	char print_temp[256];
	FILE* fp;
	fp = fopen("shelf.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t ���� �ҷ����⿡ �����߽��ϴ�.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ����)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");

}

// ���� �� 
void G_door() {
	printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��         ���� �����Ͽ���.        ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������������������\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t���� ���� ����ִ�. \n");	Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t���� ���÷��� ���谡 �ʿ��մϴ�. \n"); Sleep(1500);
	printf("\t\t\t\t\t\t\t\t\t\t���� ���ðڽ��ϱ�? \n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t        ��������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ��   1. ���� ����  ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ��������������������������������������\n\n"); Sleep(1000);
	////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	char print_temp[256];
	FILE* fp;
	fp = fopen("door.txt", "r");


	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t ���� �ҷ����⿡ �����߽��ϴ�.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ����)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");

}

// ���� �۾���  
void G_worktable() {
	printf("\t\t\t\t\t\t\t\t\t\t��������������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��        �۾��뿡 �����Ͽ���.       ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t��������������������������������������������������������������������������\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t�۾��뿡�� �繰��(1��)�� �繰��(2��)�� �߰��ߴ�.\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t�繰�� 1���� ������ ���������� �ǲ� ������ �ְ�\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t�繰�� 2���� ����� �����Ǿ��ִ�.\n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t      ������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t      ��   1. 1�� �繰�� ���� ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t      ��   2. 2�� �繰�� ���� ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t      ��   3. �ֺ��� �����Ѵ� ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t      ������������������������������������������������\n\n"); Sleep(1000);
	////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	char print_temp[256];
	FILE* fp;
	fp = fopen("table.txt", "r");

	//system()

	if (fp == NULL) {
		printf("\n\t\t\t\t\t\t\t\t\t\t���� �ҷ����⿡ �����߽��ϴ�.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ~ 3 ����)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");

}

// ���� ��Ŀ
void G_locker() {
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��         ��Ŀ�� �����Ͽ���.       ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������������������\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t��Ŀ�� ���غ��̴� �ڹ���� ����ִ�. \n\n");	Sleep(1300);
	printf("\t\t\t\t\t\t\t\t\t\t        ������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ��   1. �����Ѵ�  ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t        ������������������������������������\n\n"); Sleep(1000);
	////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	char print_temp[256];
	FILE* fp;
	fp = fopen("lockers.txt", "r");

	//system()

	if (fp == NULL) {
		printf(" ���� �ҷ����⿡ �����߽��ϴ�.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ~ 6 ����)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");

}

// ���� �ڵ���
void G_car() {
	////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	printf("\t\t\t\t\t\t\t\t\t\t��������������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��        �ڵ����� �����Ͽ���.       ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t��������������������������������������������������������������������������\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t�ڵ����� ���� ��� ����ִ�.\n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t      ����������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t      ��   1. �����Ѵ�(�Ʒ�) ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t      ��   2. �����Ѵ�(����) ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t      ����������������������������������������������\n\n"); Sleep(1000);
	char print_temp[256];
	FILE* fp;
	fp = fopen("car.txt", "r");

	//system()

	if (fp == NULL) {
		printf("���� �ҷ����⿡ �����߽��ϴ�.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ� 
	Sleep(1000);
	printf("\n\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ~ 2 ����)");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");
}

// ���� ���� 
void G_shutter() {
	printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t��         ���Ϳ� �����Ͽ���.      ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������������������\n\n"); Sleep(1000);
	printf("\t\t\t\t\t\t\t\t\t\t���ʹ� ���� ��罽�� ĪĪ �����ִ�. \n");	Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t���� ����� �������� ���� �ʾ� ���Ͱ� �콽���ִ�.\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t���Ͱ� �콽� �������� ���͸� ���ø���� ���� �� ����. \n\n"); Sleep(1200);
	printf("\t\t\t\t\t\t\t\t\t\t       ������������������������������������������\n");
	printf("\t\t\t\t\t\t\t\t\t\t       ��   1. ���͸� ����  ��\n");
	printf("\t\t\t\t\t\t\t\t\t\t       ������������������������������������������\n"); Sleep(1000);
	////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	char print_temp[256];
	FILE* fp;
	fp = fopen("shutter.txt", "r");

	//system()

	if (fp == NULL) {
		printf(" ���� �ҷ����⿡ �����߽��ϴ�.\n");
		//return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);
	/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
	Sleep(1000);
	printf("\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ���ڳ� �Է��Ͻʽÿ�. (1 ����)\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");
}


int main() {
	// (ȸ�� ����)=====================================================================
	char number_1[20][20] = { '\0' };
	char number_2[20][20] = { '\0' };
	char number_3[20][20] = { '\0' };
	char number_4[20][20] = { '\0' };
	int key1 = 0, key2 = 0;
	strcpy(number_1[0], "��ġ"); strcpy(number_1[1], "���������"); strcpy(number_1[2], "��Ŀ����"); strcpy(number_1[3], "������");
	strcpy(number_2[0], "����"); strcpy(number_2[1], "�ڵ�������"); strcpy(number_2[2], "��");
	strcpy(number_3[0], "�ڵ�����ȣ��");
	strcpy(number_4[0], "������"); strcpy(number_4[1], "��ƮĿ��");
	M* head = (M*)malloc(sizeof(M));
	head->next = NULL;
	int loop = 1, count = 0;
	while (loop) {
		int sel = 0;
		M_init();
		scanf("%d", &sel);
		while (getchar() != '\n');
		if (0 < sel && sel <= 5) {
			if (sel == 1) { system("cls"); M_sign_up(head); }// 1��
			if (sel == 2) { system("cls"); count = M_login(head); }// 2��
			if (sel == 3) { system("cls"); M_print(head); }// 3��
			if (sel == 4) { system("cls"); M_delete(head); }// 4��
			if (sel == 5) { system("cls"); M_change(head); }// 5��
		}
		else {
			Sleep(1000);
			system("cls");
		}
		if (count == 1) { loop = 0; }// �α��� ����
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
			// ������ 
			if (sel2 == 1) {
				system("cls");
				G_item(head2);
				scanf("%d", &sel5);
				if (sel5 == 1) { exit; }
			}

			// ����
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

					printf("\n\t\t\t\t\t\t\t\t\t\t ������ �ΰ��� �������� ��ȣ�� �������ּ���.\n\n");
					printf("\t\t\t\t\t\t\t\t\t\t ù ��°: ");
					scanf(" %d", &key1);
					printf("\n\n");
					printf("\t\t\t\t\t\t\t\t\t\t �� ��°: ");
					scanf(" %d", &key2);

					if (strcmp(A[key1 - 1], "���������") == 0 && strcmp(A[key2 - 1], "�ڵ�����ȣ��") == 0 || strcmp(A[key1 - 1], "�ڵ�����ȣ��") == 0 && strcmp(A[key2 - 1], "���������") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t ���� ���� !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t ��й�ȣ�� �߰��Ͽ����ϴ� !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t ��й�ȣ: 9931\n"); 
						system("pause");
					}
					else if (strcmp(A[key1 - 1], "����") == 0 && strcmp(A[key2 - 1], "������") == 0 || strcmp(A[key1 - 1], "������") == 0 && strcmp(A[key2 - 1], "����") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t ���� ���� !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t Į�� ��������ϴ� !\n"); Sleep(1500);
						G_mix_select1(head2);
						Sleep(1000);
					}
					else if (strcmp(A[key1 - 1], "�ڵ�������") == 0 && strcmp(A[key2 - 1], "������") == 0 || strcmp(A[key1 - 1], "������") == 0 && strcmp(A[key2 - 1], "�ڵ�������") == 0) {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t ���� ���� !\n"); Sleep(1500);
						printf("\n\t\t\t\t\t\t\t\t\t\t ����̹��� ��������ϴ� !\n"); Sleep(1500);
						G_mix_select2(head2);
						Sleep(1000);
					}
					else {
						printf("\n");
						printf("\n\t\t\t\t\t\t\t\t\t\t ���� ����...!\n"); Sleep(1000);
						exit;
					}
				}

				// ���� -> ����� ������ �ڵ��� ��ȣ��
				/*if (sel10 == 1) {
					I* G_mix = head2;
					I* G_mix2 = head2;
					int j = 0, k = 0, kk = 0;
					while (G_mix != NULL) {
						j = strcmp(G_mix->equipment, "���������");
						if (j == 0) {
							while (G_mix2 != NULL) {
								k = strcmp(G_mix2->equipment, "�ڵ�����ȣ��");
								if (j == 0 && k == 0) {
									printf("\n");
									printf("\n\t\t\t\t\t���� ���� !\n"); Sleep(1500);
									printf("\n\t\t\t\t\t��й�ȣ�� �߰��Ͽ����ϴ� !\n"); Sleep(1500);
									printf("\n\t\t\t\t\t��й�ȣ: 9931\n");
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
						printf("\n\t\t\t\t\t���տ� �����Ͽ����ϴ�...!\n");
						Sleep(1000);
						exit;
					}
				}*/

				// ���� -> �ڷΰ���
				else if (sel10 == 2) {
					system("cls");
					G_mix1();
					scanf("%d", &sel14);
					if (sel14 == 1) { exit; }
				}
				else if (sel10 == 3) {
					printf("\n\t\t\t\t\t\t\t\t\t\t ����â�� �����ϴ�.\n");
					Sleep(1500);
					exit;
				}
			}

			// ����
			else if (sel2 == 3) {
				system("cls");
				G_check();
				scanf("%d", &sel3);

				// ���� -> ���� 
				if (sel3 == 1) {
					system("cls");
					G_table();
					scanf("%d", &sel4);
					if (sel4 == 1) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t���� ���\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
						//printf("\n\t\t\t\t\t" "��ġ","���������","��Ŀ����","������") 
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
						printf("�� �߰��Ͽ����ϴ�.\n\n"); Sleep(1000);
						G_table_select(head2);
						Sleep(1000);
						exit;
					}
					if (sel4 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t���ݿ��� �����ϴ�.\n");
						Sleep(1000);
						exit;
					}

				}

				// ���� -> �� (����1)
				if (sel3 == 2) {
					system("cls");
					G_door();
					scanf("%d", &sel6);
					if (sel6 == 1) {
						I* G_door = head2;
						int n3 = 0;

						while (G_door != NULL) {
							n3 = strcmp(G_door->equipment, "������");
							if (n3 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t�����踦 ����Ͽ� ���� �������ϴ�.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t���� �������� ������� �ɷ��ִ� ���� ��Ÿ�����ϴ� !\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t��й�ȣ�� �Է��ϼ���(4�ڸ�) : ");
								scanf("%d", &sel11);
								if (sel11 == 9931) {
									system("cls");
									printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t��й�ȣ�� �Է����� ���� ���ȴ�.\n"); Sleep(2000);
									printf("\n\n\t\t\t\t\t\t\t\t\t\t�� ���̷� ���� ���δ�.\n"); Sleep(2000);
									system("cls");

									printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������\n");
									printf("\t\t\t\t\t\t\t\t\t\t��          ENDING 1         ��\n");
									printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������������\n\n"); Sleep(2000);
									////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
									char print_temp2[256];
									FILE* fp2;
									fp2 = fopen("succeed.txt", "r");


									//system()

									if (fp2 == NULL) {
										printf("\n\t\t\t\t\t\t\t\t\t\t ���� �ҷ����⿡ �����߽��ϴ�.\n");
										//return 1;
									}
									while (fgets(print_temp2, 255, fp2) != NULL) {
										printf(print_temp2);
									}
									puts("");
									fclose(fp2);
									/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
									printf("\n\n\t\t\t\t\t\t\t\t\t\t���� ���� Ż���Ͽ��� ! \n\n"); Sleep(1500);
									printf("\n\t\t\t\t\t\t\t\t\t\tŻ�� ���� ! \n\n");

									system("pause");
									break;
								}
								else {
									printf("\n\t\t\t\t\t\t\t\t\t\t��й�ȣ�� Ʋ���ϴ�...!\n");
									Sleep(1000);
									break;
								}
							}
							G_door = G_door->next;
						}
						if (n3 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t���� ���� ����ֽ��ϴ�. (������ �ʿ�)\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel6 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t������ �����ϴ�.\n");
						Sleep(1000);
						exit;
					}
				}

				// ���� -> �۾��� 
				if (sel3 == 3) {
					system("cls");
					G_worktable();
					scanf("%d", &sel7);// 1�� �繰��
					if (sel7 == 1) {
						int n5 = 0;
						int loop2 = 1;
						I* G_worktable = head2;

						while (G_worktable != NULL) {
							n5 = strcmp(G_worktable->equipment, "Į");
							if (n5 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'Į'�� ����Ͽ� �������� �������ϴ�.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t< HINT > �ڵ�������� ������� ���� ����̹��Դϴ�.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t���� ���\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 1; i < 2; i++) {
									if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_2[i]);
								}
								printf("�� �߰��Ͽ����ϴ�.\n\n"); Sleep(1000);

								G_worktable_select(head2);
								Sleep(1000);
								break;
							}
							G_worktable = G_worktable->next;
						}
						if (n5 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t������ ���������� �ǲ� �׿��� �־� �Ǽ����δ� �� �� �����ϴ�...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel7 == 2) {
						int n6 = 0;
						I* G_worktable2 = head2;

						while (G_worktable2 != NULL) {
							n6 = strcmp(G_worktable2->equipment, "����̹�");
							if (n6 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'����̹�'�� ����Ͽ� ���縦 Ǯ�����ϴ�.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t���� ���\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 2; i < 3; i++) {
									if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_2[i]);
								}
								printf("�� �߰��Ͽ����ϴ�.\n\n"); Sleep(1000);

								G_worktable_select(head2);
								Sleep(1000);
								break;
							}
							G_worktable2 = G_worktable2->next;
						}
						if (n6 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t����� �����Ǿ� �־� �� �� �����ϴ�...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel7 == 3) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t���� ���\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
						for (int i = 0; i < 1; i++) {
							if (strcmp(number_2[i], A[0]) == 0 || strcmp(number_2[i], A[1]) == 0 || strcmp(number_2[i], A[2]) == 0 || strcmp(number_2[i], A[3]) == 0 || strcmp(number_2[i], A[4]) == 0 || strcmp(number_2[i], A[5]) == 0 || strcmp(number_2[i], A[6]) == 0 || strcmp(number_2[i], A[7]) == 0 || strcmp(number_2[i], A[8]) == 0) {
								continue;
							}Sleep(700);
							printf(" %s ", number_2[i]);
						}
						printf("�� �߰��Ͽ����ϴ�.\n\n"); Sleep(1000);
						G_worktable_select(head2);
						Sleep(1000);
						exit;
					}
					else {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t�۾��뿡�� �����ϴ�.\n");
						Sleep(1000);
						exit;
					}
				}

				// ���� -> ��Ŀ 
				if (sel3 == 4) {
					system("cls");
					G_locker();
					scanf("%d", &sel8);
					if (sel8 == 1) {
						int n = 0;
						I* G_locker = head2;

						while (G_locker != NULL) {
							n = strcmp(G_locker->equipment, "��ġ");
							if (n == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'��ġ'�� ����Ͽ� �ڹ��踦 �ν����ϴ�.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t���� ���\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 0; i < 1; i++) {
									if (strcmp(number_3[i], A[0]) == 0 || strcmp(number_3[i], A[1]) == 0 || strcmp(number_3[i], A[2]) == 0 || strcmp(number_3[i], A[3]) == 0 || strcmp(number_3[i], A[4]) == 0 || strcmp(number_3[i], A[5]) == 0 || strcmp(number_3[i], A[6]) == 0 || strcmp(number_3[i], A[7]) == 0 || strcmp(number_3[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_3[i]);
								}
								printf("�� �߰��Ͽ����ϴ�.\n\n"); Sleep(1000);


								//printf("\n\t\t\t\t\t'�ڵ�����ȣ��'�� �߰��Ͽ����ϴ� !\n");
								G_locker_select(head2);
								Sleep(1000);
								break;
							}
							G_locker = G_locker->next;
						}
						if (n != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t��Ŀ�� �����ϱ� ���ؼ� '��ġ'�� �ʿ��մϴ�...!\n");
							Sleep(2000);
							exit;
						}
					}
					if (sel8 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t��Ŀ���� �����ϴ�.\n");
						Sleep(1000);
						exit;
					}
				}

				// ���� -> �ڵ���
				if (sel3 == 5) {
					system("cls");
					G_car();
					scanf("%d", &sel9);
					if (sel9 == 1) {// �� ���
						I* G_car = head2;
						int n2 = 0;
						while (G_car != NULL) {
							n2 = strcmp(G_car->equipment, "��");
							if (n2 == 0) {
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t'��'�� ����Ͽ� �ڵ����� ���÷� ���縦 �����մϴ�.\n"); Sleep(1500);
								printf("\n\t\t\t\t\t\t\t\t\t\t���� ���\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(0500);
								for (int i = 0; i < 1; i++) {
									if (strcmp(number_4[i], A[0]) == 0 || strcmp(number_4[i], A[1]) == 0 || strcmp(number_4[i], A[2]) == 0 || strcmp(number_4[i], A[3]) == 0 || strcmp(number_4[i], A[4]) == 0 || strcmp(number_4[i], A[5]) == 0 || strcmp(number_4[i], A[6]) == 0 || strcmp(number_4[i], A[7]) == 0 || strcmp(number_4[i], A[8]) == 0) {
										continue;
									}Sleep(700);
									printf(" %s ", number_4[i]);
								}
								printf("�� �߰��Ͽ����ϴ�.\n\n"); Sleep(1000);
								//printf("\n\t\t\t\t\t'������', '��ƮĿ��'�� �߰��Ͽ����ϴ� !\n");
								G_car_select(head2);
								Sleep(1000);
								break;
							}
							G_car = G_car->next;
						}
						if (n2 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t�ڵ��� �Ʒ��� �����ϱ� ���ؼ� '��'�� �ʿ��մϴ�...!\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel9 == 2) {// �ڵ��� ���� ��� 
						I* G_car2 = head2;
						int n3 = 0;
						while (G_car2 != NULL) {
							n3 = strcmp(G_car2->equipment, "�ڵ�������");
							if (n3 == 0) {
								printf("\n\n");
								printf("\n\t\t\t\t\t\t\t\t\t\t'�ڵ�������'�� ����Ͽ� �ڵ��� Ʈ��ũ�� �������ϴ�.\n");
								printf("\n\t\t\t\t\t\t\t\t\t\t���� ���\n\n\n\t\t\t\t\t\t\t\t\t\t"); Sleep(1000);
								for (int i = 1; i < 2; i++) {
									if (strcmp(number_4[i], A[0]) == 0 || strcmp(number_4[i], A[1]) == 0 || strcmp(number_4[i], A[2]) == 0 || strcmp(number_4[i], A[3]) == 0 || strcmp(number_4[i], A[4]) == 0 || strcmp(number_4[i], A[5]) == 0 || strcmp(number_4[i], A[6]) == 0 || strcmp(number_4[i], A[7]) == 0 || strcmp(number_4[i], A[8]) == 0) {
										continue;
									}
									printf(" %s ", number_4[i]);
								}
								printf("�� �߰��Ͽ����ϴ�.\n\n"); Sleep(1000);
								//printf("\n\t\t\t\t\t'������', '��ƮĿ��'�� �߰��Ͽ����ϴ� !\n");
								G_car_select(head2);
								Sleep(1000);
								break;
							}
							G_car2 = G_car2->next;
						}
						if (n3 != 0) {
							printf("\n\t\t\t\t\t\t\t\t\t\t�ڵ��� Ʈ��ũ�� �����ϱ� ���ؼ� '�ڵ�������'�� �ʿ��մϴ�...!\n");
							Sleep(2000);
							exit;
						}
					}
					else {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t�ڵ������� �����ϴ�.\n");
						Sleep(1000);
						exit;
					}

				}

				// ���� -> ���� (����2)
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
							n10 = strcmp(G_shutter->equipment, "��ƮĿ��");
							if (n10 == 0) {
								system("cls");
								n12 = 0;
								printf("\n\n");
								printf("\t\t\t\t\t\t\t\t\t\t��ƮĿ�͸� ����Ͽ� ��罽�� �����߽��ϴ�.\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\tŻ���Ϸ��� ���͸� ���÷��� �մϴ�.\n\n"); Sleep(1500);
								printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������\n");
								printf("\t\t\t\t\t\t\t\t\t\t��   1. ���͸� ���ø��� ��\n");
								printf("\t\t\t\t\t\t\t\t\t\t����������������������������������������������������\n");
								printf("\n\n\t\t\t\t\t\t\t\t\t\t�ڷΰ����� �ƹ� ��ȣ�� �Է��Ͻʽÿ�. (1 ����)\n");
								printf("\t\t\t\t\t\t\t\t\t\t��ȣ�� �Է��ϼ���...");
								scanf("%d", &sel13);
								if (sel13 == 1) {
									while (G_shutter2 != NULL) {
										n11 = strcmp(G_shutter2->equipment, "��");
										if (n11 == 0) {
											system("cls");
											printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t������ �콼 ���͸� ���÷ȴ�.\n"); Sleep(1500);
											printf("\n\t\t\t\t\t\t\t\t\t\t���� ���̷� ���� ���δ�.\n"); Sleep(1500);
											system("cls");
											printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������\n");
											printf("\t\t\t\t\t\t\t\t\t\t��          ENDING 2          ��\n");
											printf("\t\t\t\t\t\t\t\t\t\t������������������������������������������������������������\n\n"); Sleep(2000);
											////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
											char print_temp3[256];
											FILE* fp3;
											fp3 = fopen("succeed.txt", "r");


											//system()

											if (fp3 == NULL) {
												printf("\n\t\t\t\t\t\t\t\t\t\t ���� �ҷ����⿡ �����߽��ϴ�.\n");
												//return 1;
											}
											while (fgets(print_temp3, 255, fp3) != NULL) {
												printf(print_temp3);
											}
											puts("");
											fclose(fp3);
											/////////////////////////// �ƽ�Ű ��Ʈ ��� �ڵ�  
											printf("\n\n\t\t\t\t\t\t\t\t\t\t���͸� ���� Ż���Ͽ��� ! \n\n"); Sleep(1500);
											printf("\n\t\t\t\t\t\t\t\t\t\tŻ�� ���� !\n\n");
											n12 = 0;
											system("pause");
											break;
										}
										G_shutter2 = G_shutter2->next;
									}
									if (n11 != 0) {
										printf("\n\t\t\t\t\t\t\t\t\t\t���͸� ���ø����� ���� �ʿ��մϴ�.");
										n12 = 0;
										Sleep(2000);
										exit;
									}
								}
								if (sel13 == 2) {
									printf("\n\t\t\t\t\t\t\t\t\t\t���͸� �����ϴ�.\n");
									n12 = 0;
									Sleep(1000);
									exit;
								}
							}
							G_shutter = G_shutter->next;
						}
						if (n10 != 0 && n12 == 1) {
							printf("\n\t\t\t\t\t\t\t\t\t\t��罽�� �ܴ��� �����Ǿ��ֽ��ϴ�.(��ƮĿ�� �ʿ�)\n");
							Sleep(2000);
							exit;
						}
					}
					else if (sel12 == 2) {
						printf("\n\n");
						printf("\t\t\t\t\t\t\t\t\t\t���Ϳ��� �����ϴ�.\n");
						Sleep(1000);
						exit;
					}
				}
				// ���� -> �ڷΰ���
				if (sel3 == 7) { system("cls"); exit; }
			}
		}
	}
	return 0;
}
