/***************************
自我練習
是否有超過「標準體重」的程式 
***************************/
#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int x;
	char *str1;
	float fltHeight=0.0f,fltWeight=0.0f;
	float fltstandard=0.0f;
	int intsex=0;
	//************************************
	printf("請輸入性別 (男生:1 女生:0) ");
	scanf("%d",&intsex);
	printf("請輸入個人身高:");
	scanf("%f",&fltHeight);
	printf("請輸入個人體重:");
	scanf("%f",&fltWeight);
	//*********************************
	fltstandard=(fltHeight-70)*0.6;
	if(intsex==1)
		fltstandard=(fltHeight-80)*0.7;
	//*********************************
	str1="你的體重已經超標";
	if(fltstandard >= fltWeight)
		str1="恭喜你的體重還在範圍內";
	//*********************************
	printf("%s\n",str1);
	system("pause");
}
