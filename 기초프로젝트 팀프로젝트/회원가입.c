#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	char print_temp[256];
	FILE* fp;
	fp = fopen("background.txt", "r");

	//system()

	if (fp == NULL) {
		printf("���� �ҷ����⿡ �����߽��ϴ�.\n");
		return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);

}

//locker(��Ŀ), car(�ڵ���) ,shelf(����) ,door(��),bench(�۾���) ,shutter(����) 

//hammer,washer(��� ������), key(��Ŀ, �ڵ���,��  ���� ����), driver
//carplate(�ڵ��� ��ȣ��)  ,voltcutter(��ƮĿ��) ,jack(�ڵ��� ��), towel(����) ,knife(������ ) 
