#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	char print_temp[256];
	FILE* fp;
	fp = fopen("background.txt", "r");

	//system()

	if (fp == NULL) {
		printf("파일 불러오기에 실패했습니다.\n");
		return 1;
	}
	while (fgets(print_temp, 255, fp) != NULL) {
		printf(print_temp);
	}
	puts("");
	fclose(fp);

}

//locker(락커), car(자동차) ,shelf(선반) ,door(문),bench(작업대) ,shutter(셔터) 

//hammer,washer(얼룩 제거제), key(락커, 자동차,문  열쇠 공용), driver
//carplate(자동차 번호판)  ,voltcutter(볼트커터) ,jack(자동차 잭), towel(수건) ,knife(날붙이 ) 
