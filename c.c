 #include <stdio.h>
 
int _xc_max(int x ,int y){
	return x>y?x:y;
}

int main(){
	
	int a;
	int b;
	int c;
	printf("please input the first integer:");
	scanf("%d",&a);
	printf("please input the second integer:");
	scanf("%d",&b);
	c=_xc_max(a,b);
	printf("the biggest number is %d",c);
	return 0;
}
