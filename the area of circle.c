#include<stdio.h>
int main()
{
	#define PI 3.1415926
	double s;
	int r;
	printf("������Բ�İ뾶��");
	scanf("%d",&r);
	s=PI*r*r;
	printf("Բ����Ϊ��%8.7f,Բ�İ뾶Ϊ:%d\n",PI,r);
	printf("Բ�����Ϊ��%f\n",s);
	return 0;
} 