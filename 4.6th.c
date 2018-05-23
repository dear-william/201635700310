#include <stdio.h>
#include <math.h>
int main()
{
	float x,y;
	printf("please input a number :");
	scanf("%f",&x);
	if (x<1){
		y=x;
		printf("y=%f",y);
	}else if(x<10)
	{
		y=x*2-1;
		printf("y=%f",y);
	}else{
		y=x*3-11;
		printf("y=%f",y);
	}
	return 0;
} 