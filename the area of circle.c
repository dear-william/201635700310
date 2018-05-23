#include<stdio.h>
int main()
{
	#define PI 3.1415926
	double s;
	int r;
	printf("请输入圆的半径：");
	scanf("%d",&r);
	s=PI*r*r;
	printf("圆周率为：%8.7f,圆的半径为:%d\n",PI,r);
	printf("圆的面积为：%f\n",s);
	return 0;
} 