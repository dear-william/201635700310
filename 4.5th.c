#include <stdio.h>
#include <math.h>
int main()
{
	int s,e;
	printf("please input a number:");
	scanf("%d",&s);
	if (s>1000||s<=0){
		printf("please input a number less than 1000:");
		scanf("%d",&s);
		e=floor(sqrt(s));
		printf("the square root of %d is:%d",s,e);
	}else {
		e=floor(sqrt(s));
		printf("the square root of %d is:%d",s,e);
	}
	return 0;
} 